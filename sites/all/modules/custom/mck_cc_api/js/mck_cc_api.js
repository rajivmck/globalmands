<?php

function _wrapper_debug($w) {
  $values = array();
  foreach ($w->getPropertyInfo() as $key => $val) {
    $values[$key] = $w->$key->value();
  }
  return $values;
}

drupal_load('module', 'mck_persons_suggest');
/**
 * Implements hook_menu().
 */

function mck_cc_api_menu(){
    $items = array();

    $items['api/cc/%'] = array(
        'type' => MENU_CALLBACK,
        'page callback' => 'mck_cc_api_callback',
        'page arguments' => array(2),
        'access callback' => TRUE,
    );

    $items['api/cc/%/%/%/approved'] = array(
        'type' => MENU_CALLBACK,
        'page callback' => 'mck_cc_api_approved',
        'page arguments' => array(2,3,4),
        'access callback' => TRUE,
    );


    $items['api/cc/form'] = array(
        'type' => MENU_CALLBACK,
        'page callback' => 'api_cc_form',
        'access callback' => TRUE,
    );

    $items['admin/config/api/cc/settings'] = array(
        'title' => 'Charge Code API Settings',
        'description' => 'Administer settings for CC API.',
        'page callback' => 'drupal_get_form',
        'page arguments' => array('cc_api_admin_form'),
        'access arguments' => array('access administration pages'),
        'file' => 'mck_cc_api.admin.inc',
        'file path' => drupal_get_path('module', 'mck_cc_api'),
    );



    return $items;
}

/**
 * Returns the theme for the popup
 *
 */

function api_cc_form(){
    return theme('api_cc_page');
}

/**
 * Implements hook_theme().
 */

function mck_cc_api_theme($existing, $type, $theme, $path){
    $body = variable_get('cc_api_popup_body');
    $footer = variable_get('cc_api_popup_footer');

    return array(
        'api_cc_page' => array(
            'variables' => array('popup_body' => $body, 'popup_footer' => $footer),
            'template' => 'mck-cc-api-popup',
            'path' => drupal_get_path('module', 'mck_cc_api') .'/templates/',
        )
    );
}

/**
 * Generate auth token
 * TODO: add ability to check if token has expired.
 */

function generate_token($regnerate = FALSE){


        $url = "http://apioauth.mckinsey.com/asg/oauth2/access_token";
        $data = array("grant_type" => "client_credentials",
            "scope" => "public",
            "client_id" => variable_get("cc_api_secret"),
            "client_secret" => variable_get("cc_api_key"),
        );

        $options = array(
            'method' => 'POST',
            'data' => drupal_http_build_query($data),
            'timeout' => 15,
            'headers' => array('Content-Type' => 'application/x-www-form-urlencoded'),
        );
        $response = drupal_http_request($url, $options);
        $datar = json_decode($response->data);
        $token = $datar->access_token;

        if (isset($token)) {
            $date = date("Y-m-d H:i:s");
            $expires = date("Y-m-d H:i:s", strtotime($date . "+30 minutes"));

            variable_set("cc_api_bearer_token", $token);
            variable_set('cc_api_bearer_expires', $expires);
        }

        return $token;

}
/**
 * Page callback created for AJAX request
 */

function mck_cc_api_callback($cc){
    $ed_name = isset($_POST['ed_name']) ? $_POST['ed_name'] : "";
    $response = api_cc_request($cc);
    print $response;

    //save entered data to profile by current logged in user
    if($response == "true"){
        $value = array();
        global $user;
        global $base_url;
        $user = user_load($user->uid);

        // Create the collection entity and set it's "host".
        $collection = entity_create('field_collection_item', array('field_name' => 'field_ccfc'));
        $collection->setHostEntity('user', $user);

        // Now define the collection parameters.
        $cwrapper = entity_metadata_wrapper('field_collection_item', $collection);
        $cwrapper->field_entered_charge_codes = $cc;
        $cwrapper->field_ed_name = $ed_name;
        $cwrapper->field_entered_time = date('m/d/Y h:m:s');
        $cwrapper->save();

        $fcid = $cwrapper->getIdentifier();

        $from = variable_get('cc_api_mail_from_email');
        $to = get_email($ed_name);
        $subject = 'GlobalM&S approval for '. $ed_name . ' under '.$cc;
        $body = 'Hi '.$ed_name.', <br/><br/>For GlobalM&S site, '. $user->name .' has requested access under '. $cc . '. <br/><br/>Please click the link below to approve.<br/><br/> <a href="'.sso_base_url().'/api/cc/'. $cc . '/' . $user->uid . '/' . $fcid .'/approved">Approve</a>';

        simple_mail_send($from, $to, $subject, $body);


    }

}

/**
* Approval callback
*/

function mck_cc_api_approved($cc, $uid, $fcid){
    if(isset($uid)) {
        $user = user_load($uid);
        $fc_wrapper = entity_metadata_wrapper('field_collection_item', $fcid);
        $fc_wrapper->field_approval_status->set(TRUE);
        $fc_wrapper->save();

        $from = variable_get('cc_api_mail_from_email');
        $user_to = $user->mail;
        $user_subject = 'Your Charge Code has been Approved';
        $url  = l('GlobalMS', sso_base_url(), array('query' => array('approved'=>'true','fcid'=>$fcid, 'uid'=>$user->uid)));
        $user_body = 'You may browse the site at ' . $url;
        // $user_body = 'You may browse the site at <a href="http://dev-drupaldev-lx07.amdc.mckinsey.com/media-services/globalms?approval="'.$fcid.'>GlobalMS</a>';
        simple_mail_send($from, $user_to, $user_subject, $user_body);
        drupal_goto('/', array('query' => array('approval'=>'true')));
    }
}

function verify_fcid_approval($fcid){

}

/**
 * API callback
 */

function api_cc_request($cc){

    $expiration = variable_get("cc_api_bearer_expires");
    $now = date("Y-m-d H:i:s");

    if($now > $expiration){
        $token = generate_token();
    } else {
        $token = variable_get("cc_api_bearer_token");
    }

    $url = 'http://api.mckinsey.com/v1/charge_codes/'.$cc.'/validate';

    $options = [
        'method' => 'GET',
        'headers' => [
            'Authorization' => "Bearer " . $token
            ]
    ];

    $request = drupal_http_request($url, $options);
    $response = json_decode($request->data);
    return $response->chargeCode->valid;

}

/**
 * Implements hook_page_alter().
 *
 */

function mck_cc_api_page_alter(&$page){
    global $modalToggle, $isAdminpage, $adminPopup;
    $modalToggle = variable_get("cc_api_enable_popup");
    $isAdminpage = strpos(current_path(), 'admin');
    $adminPopup = variable_get('cc_api_enable_popup_admin');
    global $user;


    function run($modalToggle, &$page, $user){

        $modalTitle = variable_get("cc_api_popup_title");
        $modalSubtitle = variable_get("cc_api_popup_subtitle");
        $siteFolder = variable_get("cc_api_path");
        $savedNID = variable_get("cc_api_access_denied_node");
        $u = user_load($user->uid);

        $lastCCfc = end($u->field_ccfc['und'])['value'];
        $approvalStatus = FALSE;
        if(isset($lastCCfc)) {
            $fc = field_collection_item_load($lastCCfc);
            $approvalStatus = !empty($fc->field_entered_charge_codes['und'][0]['value']) ? "Pending" :  $fc->field_approval_status['und'][0]['value'];

        }

        drupal_add_js(drupal_get_path("module", "mck_cc_api") . "/js/iziModal/js/iziModal.js");
        drupal_add_css(drupal_get_path("module", "mck_cc_api") . "/js/iziModal/css/iziModal.css");
        drupal_add_js(array('mck_cc_api' => array('title' => $modalTitle, 'subtitle' => $modalSubtitle, 'toggle' => $modalToggle, 'sitefolder' => $siteFolder, 'savedNID' => $savedNID, 'userApprovalStatus' => $approvalStatus)), array('type' => 'setting'));


        drupal_add_js(drupal_get_path("module", "mck_cc_api") . "/js/mck_cc_api.js");
        $page['content']['system_main']['main']['#markup'] .= theme('api_cc_page');
    }

    if($modalToggle && $isAdminpage === FALSE) {
        if($user->uid == "1"){
            if($adminPopup == "1"){
                run($modalToggle, $page, $user);
            }
        } else {
            run($modalToggle, $page, $user);
        }
    }
}

/**
 * Implements hook_form().
 */

function mck_cc_api_form($form, &$form_state){

    $form = array();

    $form['charge_code_ed_name'] = array(
        '#type' => 'textfield',
        '#attributes' => array(
        'placeholder' => 'ED Name (Mandatory)',
        '#required' => TRUE,  
        ),
        '#autocomplete_path' => 'mck_persons_suggest/autocomplete',

    );

    $form['charge_code'] = array(
        '#type' => 'textfield',
        '#attributes' => array(
            'placeholder' => 'Enter Charge Code (Mandatory for tracking purpose only)',
        ),
    );

    $form['superfooter'] =  array(
        '#prefix' => '<div class="popup-superfooter">',
        '#suffix' => '</div>',
        '#markup' => variable_get('cc_api_popup_superfooter', ''),
    );

    $form['charge_code_submit'] = array(
        '#type' => 'button',
        '#value' => 'Validate',
        '#ajax' => array(
            'callback' => 'validate_cc',
            'wrapper' => '#popup-izimodal .result',
            'effect' => 'fade',
        ),
        '#suffix' => '<div class="spinner">
                      <div class="rect1"></div>
                      <div class="rect2"></div>
                      <div class="rect3"></div>
                      <div class="rect4"></div>
                      <div class="rect5"></div>
                      </div>',
    );



    return $form;
}
/**
* Get user's email by full name, ie. $ed_name
*/
function get_email($ed_name){
    $email = NULL;
    if (!empty($ed_name)) {
        // ddl($value);
        preg_match('/^(?:\s*|(.*) )?\[\s*uid\s*:\s*(\d+)\s*\]$/', $ed_name, $matches2);

        if (empty($matches2)) {

            $checkoffice = explode('[', $ed_name);
            if (is_array($checkoffice)) {
                $fullname = $checkoffice[0];

                $officecode = str_replace("]", "", $checkoffice[1]);
                // Swap Back
                if ($officecode == "NYC") {
                    $officecode = "FIR";
                }
            }
            //Check If User Exists
                $email = mck_persons_suggest_find_email($fullname, $officecode);
        }
    }

 return $email;
}

/**
* Implements hook_user_login().
*/

function mck_cc_api_user_login(&$edit, $account){
    $lastCCEntered = end($account->field_ccfc['und'])['value'];

    if(isset($lastCCEntered)) {
        $fc = field_collection_item_load($lastCCEntered);
        $approvalStatus = $fc->field_approval_status['und'][0]['value'];
        $enteredCC = $fc->field_entered_charge_codes['und'][0]['value'];


        if($approvalStatus == "0" && isset($enteredCC)){
            $savedNID = variable_get("cc_api_access_denied_node");
            $redirectURL = "node/".$savedNID;
            $_GET['destination'] = $redirectURL;
        }
    }
}


function mck_cc_api_preprocess_page(&$variables){
    global $user;
    $uid = $user->uid;
    $account = user_load($uid);

    $lastCCEntered = end($account->field_ccfc['und'])['value'];

    if(isset($lastCCEntered)) {
        $fc = field_collection_item_load($lastCCEntered);
        $approvalStatus = $fc->field_approval_status['und'][0]['value'];
        $currentPath = current_path();
        $savedNID = variable_get("cc_api_access_denied_node");
        $redirectURL = "node/".$savedNID;
        $enteredCC = $fc->field_entered_charge_codes['und'][0]['value'];

        if($approvalStatus == "0" && $currentPath !== $redirectURL && isset($enteredCC) && $uid !== "1"){
            drupal_goto($redirectURL);
        }
    }
}

// function mck_cc_api_get_last_fc