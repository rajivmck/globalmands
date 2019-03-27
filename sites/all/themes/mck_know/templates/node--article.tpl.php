<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */

  if(function_exists('sso_basepath_sso_or_not') && sso_basepath_sso_or_not() === TRUE) {
      $var_base = variable_get('sso_config_base_path');
      $var_domain = variable_get('sso_config_domain');
      $sso_base_url = $var_domain . substr($var_base, 0, -1);
      $base_path = $sso_base_url . '/';
  } else {
      $sso_base_url = $options['base_url'];
      $base_path = base_path();
  }

 $base_url="http://".$_SERVER['SERVER_NAME'].dirname($_SERVER["REQUEST_URI"].'?').'/';
 $curr_node_url = url('node/'.$node->nid, array('absolute' => TRUE));

$videoUri = isset($node->field_file['und'][0]['uri']) ? $node->field_file['und'][0]['uri']: NULL;
$videoUrl =    !empty($videoUri) ? file_create_url($videoUri) : NULL;

$docType =  isset($node->field_document_type['und'][0]['value']) ? $node->field_document_type['und'][0]['value']: NULL;
$videoType = isset($node->field_video_type['und'][0]['value']) ? $node->field_video_type['und'][0]['value']: NULL;
$videoLink  = isset($node->field_urls['und'][0]['display_url']) ? $node->field_urls['und'][0]['display_url']: NULL;
$docLink  = isset($node->field_link['und'][0]['display_url']) ? $node->field_link['und'][0]['display_url']: NULL;

$downloadUri = isset($node->field_download['und'][0]['uri']) ? $node->field_download['und'][0]['uri']: NULL;
$downloadUrl =    !empty($downloadUri) ? file_create_url($downloadUri) : NULL;
$array = explode('.', $downloadUri);
$extension = end($array);
$ArrayExts = array("pptx", "ppt");
?>

<?php 
  global $user;
  hide($content['field_document_type']);
  hide($content['field_download']);
  hide($content['field_type']);
  hide($content['field_case_id']);
  hide($content['field_year_case_was_tapped']);
  hide($content['field_client_name']);
  hide($content['field_cst_contracts']);
  hide($content['field_industry_sector']);
  hide($content['field_region']);
  hide($content['field_related_materials']);
  hide($content['field_industries']);
  hide($content['field_regions']);
  hide($content['field_case_link']);

  /*$referer = explode('/', $_SERVER['HTTP_REFERER']);
  $class = !in_array('front', $referer) ? 'blue' : '';*/
?>
 
<!-- <iframe src="sites/all/themes/mck_know/javascript/ViewerJS/#<?php print $base_url;?>sites/default/files/sstest.pdf" width="724" height="1024"></iframe>
 -->
<div class="page-class popup-wrapper blue">
  <div class="popup-header">
     <div class="type">
            <?php print render($content['field_type']); ?>
      </div>
         <div class="icons">
            <?php if (bookmark_get_item($user->uid, $node->nid)): ?>
              <span class="star-icon active" data-nid="<?php print $node->nid; ?>">Save</span>
            <?php else: ?>
              <span class="star-icon" data-nid="<?php print $node->nid; ?>">Save</span>
            <?php endif; ?>
              <!--<a href="mailto:email@mckinsey.com&subject=Sharing '<?php //print $title ?>' from Global M&S" class="share">Share</a>-->
              <?php if (isset($field_case_link[0]['value'])): ?>
                <a href="mailto:<?php print $field_case_link[0]['value']; ?>" class="share">Share</a>
              <?php else: ?>
                <a href="mailto:?subject=Sharing '<?php print $title ?>' from Global MS&body=Case Study Link: <?php print $curr_node_url ?>'<?php print $title ?>' " class="share">Share</a>
              <?php endif; ?>
              <a href="<?php print file_create_url($field_download[0]['uri']); ?>" class="download" download>Download (<?php print format_size($field_download[0]['filesize']); ?>)</a>
          </div>
  </div>
  <div class="popup-content">
         <div class="title">
          <h3>  <?php print $title; ?></h3>
          </div>

       <?php if ($videoType == 'file'): ?>
        <video id="myvideo" class="video-js vjs-default-skin vjs-16-9" controls preload="auto" width="640" data-setup="{}">
         <source src="<?php print $videoUrl;?>" type='video/mp4'>
        </video>

      <?php elseif ($videoType == 'link'): ?>
        <video id="myvideo" class="video-js vjs-default-skin vjs-16-9" controls preload="auto" width="640" data-setup="{}">
         <source src="<?php print $videoLink;?>" type='video/mp4'>
        </video>
      <?php elseif ($docType == 'file' &&  !in_array($extension,$ArrayExts)): ?>
 
           <div class="pdf-wrapper pdf3">                      
             <iframe src="<?php print $base_path;?>sites/all/themes/mck_know/javascript/ViewerJS/#<?php print file_create_url_on_globalmands($field_download[0]['uri']); ?>"></iframe>          
          </div>
  
   <?php elseif ($docType == '' || $videoType==''): ?>
    <div class="pdf6"></div>
     <?php endif; ?>
    
     <div class="page-content">
      <?php print render($content); ?>  
    </div> 
  </div>
  <div class="popup-sidebar">
    <?php if (render($content['field_case_id'])): ?>
      <div class="field-case-id">
        <label><?php print $content['field_case_id']['#title']; ?>:</label>
        <?php print render($content['field_case_id']); ?>
      </div>
    <?php endif; ?>
    <?php if (render($content['field_industries'])): ?>
      <div class="field-industry-sector">
        <label><?php print $content['field_industries']['#title']; ?>:</label>
        <?php print render($content['field_industries']); ?>
      </div>
    <?php endif; ?>
      <?php if (render($content['field_regions'])): ?>
      <div class="field-region">
        <label><?php print $content['field_regions']['#title']; ?>:</label>
        <?php print render($content['field_regions']); ?>
      </div>
    <?php endif; ?>
    
    <?php if (render($content['field_cst_contracts'])): ?>
      <div class="field-cst-contracts">
        <label><?php print $content['field_cst_contracts']['#title']; ?>:</label>
        <?php print render($content['field_cst_contracts']); ?>
      </div>
    <?php endif; ?>
    
  
    <?php if (render($content['field_related_materials'])): ?>
      <div class="field-related-materials">
        <label><?php print $content['field_related_materials']['#title']; ?></label>
        <hr>
        <?php foreach($field_related_materials as $item): ?>
          <div class="related-item">
             <div class="valign-wrapper">
                <div>
                <?php if ($item['node']->field_document_type[LANGUAGE_NONE][0]['value'] == 'file'): ?>
                  <?php print l('', 'node/'. $item['node']->nid, array('attributes' => array('class' => array('document-popup type file')))); ?>
                <?php else: ?>
                  <?php print l('', 'node/'. $item['node']->nid, array('attributes' => array('class' => array('document-popup type video')))); ?>
                <?php endif; ?>
                </div>
                <div>
                  <div class="title">
                    <?php print l($item['node']->title, 'node/'. $item['node']->nid, array('attributes' => array('class' => array('document-popup')))); ?>
                  </div>
                </div>
              </div>
          </div>
        <?php endforeach;?>
      </div>
    <?php endif; ?>
  </div>
</div>
