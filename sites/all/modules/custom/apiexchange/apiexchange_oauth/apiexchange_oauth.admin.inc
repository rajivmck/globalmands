<?php

/**
 * @file
 */

/**
 *
 */
function apiexchange_oauth_settings_form($form, &$form_state) {
  $form['apiexchange_oauth_url'] = array(
    '#type' => 'textfield',
    '#title' => t('API Oauth Url'),
    '#required' => TRUE,
    '#maxlength' => 255,
    '#default_value' => variable_get('apiexchange_oauth_url', 'http://qa-apioauth.mckinsey.com/asg/oauth2/access_token'),
  );

  $form['apiexchange_oauth_grant_type'] = array(
    '#type' => 'textfield',
    '#title' => t('API Grant Type'),
    '#required' => TRUE,
    '#maxlength' => 255,
    '#default_value' => variable_get('apiexchange_oauth_grant_type', 'client_credentials'),
  );

  $form['apiexchange_oauth_scope'] = array(
    '#type' => 'textfield',
    '#title' => t('API Oauth Scope'),
    '#required' => TRUE,
    '#maxlength' => 255,
    '#default_value' => variable_get('apiexchange_oauth_scope', 'public'),
  );

  $form['apiexchange_oauth_client_id'] = array(
    '#type' => 'textfield',
    '#title' => t('API Oauth Client Id'),
    '#required' => TRUE,
    '#maxlength' => 255,
    '#default_value' => variable_get('apiexchange_oauth_client_id', 'j3k1SZYxA9w5S2x5R4EySvXpYvy1xnNj'),
  );

  $form['apiexchange_oauth_client_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('API Oauth Client Secret'),
    '#required' => TRUE,
    '#maxlength' => 255,
    '#default_value' => variable_get('apiexchange_oauth_client_secret', 'AMiejYuXRSegSZmY'),
  );

  $form['apiexchange_oauth_debug_mode'] = array(
    '#title' => t('Debug mode'),
    '#description' => t('Enable debug mode if you would like to see the URL when a request is being executed.'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('apiexchange_oauth_debug_mode', ''),
  );

  return system_settings_form($form);
}
