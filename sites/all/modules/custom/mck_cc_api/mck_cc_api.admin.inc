<?php


function cc_api_admin_form($form, &$form_state) {

    $form['popup'] = array(
        '#type' => 'fieldset',
        '#title' => 'Charge Code Popup settings',
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
    );

    $form['cc_api'] = array(
        '#type' => 'fieldset',
        '#title' => 'Charge Code API settings',
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['popup']['cc_api_enable_popup'] = array(
        '#type' => 'checkbox',
        '#title' => 'Toggle Popup',
        '#description' => 'Check this box to enable popup. Uncheck to disable.',
        '#default_value' => variable_get('cc_api_enable_popup'),
    );
    $form['popup']['cc_api_enable_popup_admin'] = array(
        '#type' => 'checkbox',
        '#title' => 'Toggle Popup for admins',
        '#description' => 'Check this box to enable popup for admin. Uncheck to disable.',
        '#default_value' => variable_get('cc_api_enable_popup_admin'),
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

    $form['cc_api']['cc_api_secret'] = array(
        '#type' => 'textfield',
        '#title' => 'API Client ID',
        '#description' => 'Enter the Client ID',
        '#default_value' => variable_get('cc_api_secret'),
    );

    $form['cc_api']['cc_api_key'] = array(
        '#type' => 'textfield',
        '#title' => 'API Key',
        '#description' => 'Enter the API Key',
        '#default_value' => variable_get('cc_api_key'),
    );

    $form['cc_api']['cc_api_path'] = array(
        '#type' => 'textfield',
        '#title' => 'Site Folder Name',
        '#description' => 'If site is in a subdirectory, place folder name here. Ex. /mediaservices/globalms, (no trailing slash)',
        '#default_value' => variable_get('cc_api_path', '/media-services/globalms'),
    );

    $form['mail'] = array(
        '#type' => 'fieldset',
        '#title' => 'Email Settings',
        '#collapsible' => TRUE,
    );
    
    $form['mail']['cc_api_mail_from_email'] = array(
        '#type' => 'textfield',
        '#title' => 'From Email Address',
        '#description' => 'Please enter who the email is being sent as. Ex. admin@mckinsey.com',
        '#default_value' => variable_get('cc_api_mail_from_email'),
    );

    return system_settings_form($form);
}