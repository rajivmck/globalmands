<?php


function cc_api_admin_form($form, &$form_state) {

    $form['popup'] = array(
        '#type' => 'fieldset',
        '#title' => 'Charge Code Popup settings',
    );

    $form['popup']['cc_api_enable_popup'] = array(
        '#type' => 'checkbox',
        '#title' => 'Toggle Popup',
        '#description' => 'Check this box to enable popup. Uncheck to disable.',
        '#default_value' => variable_get('cc_api_enable_popup'),
    );

    $form['popup']['cc_api_popup_title'] = array(
        '#type' => 'textfield',
        '#title' => 'Title',
        '#description' => 'Enter the title for popup box',
        '#default_value' => variable_get('cc_api_popup_title', 'Charge Code'),
    );

    $form['popup']['cc_api_popup_subtitle'] = array(
        '#type' => 'textfield',
        '#title' => 'Subtitle',
        '#description' => 'Enter the subtitle for popup box',
        '#default_value' => variable_get('cc_api_popup_subtitle', 'Enter a valid charge code to proceed.'),
    );

    $form['popup']['cc_api_popup_body'] = array(
        '#type' => 'textarea',
        '#title' => 'Body',
        '#description' => 'Enter the body for popup box',
        '#default_value' => variable_get('cc_api_popup_body', ''),
    );

    $form['popup']['cc_api_popup_superfooter'] = array(
        '#type' => 'textarea',
        '#title' => 'Super Footer',
        '#description' => 'Enter the super footer for popup box',
        '#default_value' => variable_get('cc_api_popup_superfooter', ''),
    );

    $form['popup']['cc_api_popup_footer'] = array(
        '#type' => 'textarea',
        '#title' => 'Footer',
        '#description' => 'Enter the footer for popup box',
        '#default_value' => variable_get('cc_api_popup_footer', ''),
    );

    $form['cc_api_token'] = array(
        '#type' => 'textfield',
        '#title' => 'Auth Token',
        '#description' => 'Enter the Authorization token to be used for the API, ex. Bearer Abc123defg456',
        '#default_value' => variable_get('cc_api_token'),
    );

    $form['cc_api_path'] = array(
        '#type' => 'textfield',
        '#title' => 'Site Folder Name',
        '#description' => 'If site is in a subdirectory, place folder name here. Ex. /mediaservices/globalms/',
        '#default_value' => variable_get('cc_api_path', '/meadia-services/globalms/'),
    );

    return system_settings_form($form);
}