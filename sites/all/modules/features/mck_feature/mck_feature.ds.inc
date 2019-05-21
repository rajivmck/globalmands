<?php

/**
 * @file
 * mck_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mck_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|case_study|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'case_study';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h5',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_operations' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'viewer_js' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|case_study|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mck_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|case_study|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'case_study';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'views_two_col_4_8';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_id',
        1 => 'node_operations',
      ),
      'col_left' => array(
        2 => 'title',
        3 => 'field_date',
        4 => 'body',
        5 => 'group_case_study_detail',
        7 => 'field_number_of_pages',
        8 => 'field_sub_sector',
        9 => 'field_function',
        10 => 'field_tribes',
        11 => 'field_growth_platforms',
        12 => 'field_regions',
        13 => 'field_cst_contacts',
        14 => 'field_initiatives',
        15 => 'field_practice_recommended_term',
        16 => 'field_fee_structure',
        17 => 'field_video_links',
        18 => 'field_related_documents',
      ),
      'col_right' => array(
        6 => 'viewer_js',
      ),
    ),
    'fields' => array(
      'field_id' => 'top',
      'node_operations' => 'top',
      'title' => 'col_left',
      'field_date' => 'col_left',
      'body' => 'col_left',
      'group_case_study_detail' => 'col_left',
      'viewer_js' => 'col_right',
      'field_number_of_pages' => 'col_left',
      'field_sub_sector' => 'col_left',
      'field_function' => 'col_left',
      'field_tribes' => 'col_left',
      'field_growth_platforms' => 'col_left',
      'field_regions' => 'col_left',
      'field_cst_contacts' => 'col_left',
      'field_initiatives' => 'col_left',
      'field_practice_recommended_term' => 'col_left',
      'field_fee_structure' => 'col_left',
      'field_video_links' => 'col_left',
      'field_related_documents' => 'col_left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'col_left' => 'div',
      'col_right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|case_study|full'] = $ds_layout;

  return $export;
}
