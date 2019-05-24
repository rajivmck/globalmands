<?php

/**
 * @file
 * mck_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mck_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-case_study-body'.
  $field_instances['node-case_study-body'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-case_study-field_additional_keywords'.
  $field_instances['node-case_study-field_additional_keywords'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_additional_keywords',
    'label' => 'Additional keywords',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-case_study-field_case_study'.
  $field_instances['node-case_study-field_case_study'] = array(
    'bundle' => 'case_study',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_case_study',
    'label' => 'Case Study',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-case_study-field_cst_contacts'.
  $field_instances['node-case_study-field_cst_contacts'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_cst_contacts',
    'label' => 'CST contacts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-case_study-field_date'.
  $field_instances['node-case_study-field_date'] = array(
    'bundle' => 'case_study',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-case_study-field_fee_structure'.
  $field_instances['node-case_study-field_fee_structure'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_fee_structure',
    'label' => 'Fee Structure',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-case_study-field_function'.
  $field_instances['node-case_study-field_function'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_function',
    'label' => 'Function',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-case_study-field_go_see_available'.
  $field_instances['node-case_study-field_go_see_available'] = array(
    'bundle' => 'case_study',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_go_see_available',
    'label' => 'Go & See Available',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-case_study-field_growth_platforms'.
  $field_instances['node-case_study-field_growth_platforms'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_growth_platforms',
    'label' => 'Growth Platforms',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => FALSE,
          'create_new_terms' => FALSE,
          'force_deepest' => FALSE,
        ),
      ),
      'type' => 'options_buttons',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-case_study-field_id'.
  $field_instances['node-case_study-field_id'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_id',
    'label' => 'ID',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-case_study-field_initiatives'.
  $field_instances['node-case_study-field_initiatives'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_initiatives',
    'label' => 'Initiatives',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-case_study-field_lop'.
  $field_instances['node-case_study-field_lop'] = array(
    'bundle' => 'case_study',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_lop',
    'label' => 'LOP',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-case_study-field_number_of_pages'.
  $field_instances['node-case_study-field_number_of_pages'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_number_of_pages',
    'label' => 'Number of Pages',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-case_study-field_practice_recommended_term'.
  $field_instances['node-case_study-field_practice_recommended_term'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_practice_recommended_term',
    'label' => 'Practice Recommended',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-case_study-field_reference_case'.
  $field_instances['node-case_study-field_reference_case'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_reference_case',
    'label' => 'Reference Case',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-case_study-field_regions'.
  $field_instances['node-case_study-field_regions'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_regions',
    'label' => 'Regions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-case_study-field_related_documents'.
  $field_instances['node-case_study-field_related_documents'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_related_documents',
    'label' => 'Related Documents',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-case_study-field_sub_sector'.
  $field_instances['node-case_study-field_sub_sector'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_sub_sector',
    'label' => 'Sub-sector',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-case_study-field_team_structure'.
  $field_instances['node-case_study-field_team_structure'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_team_structure',
    'label' => 'Team Structure',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'ldap_user',
      'settings' => array(),
      'type' => 'ldap_user_hidden',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-case_study-field_tribes'.
  $field_instances['node-case_study-field_tribes'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tribes',
    'label' => 'Tribes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-case_study-field_video_links'.
  $field_instances['node-case_study-field_video_links'] = array(
    'bundle' => 'case_study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_video_links',
    'label' => 'Videos',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-contact-field_email'.
  $field_instances['node-contact-field_email'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-credentials-field_credential'.
  $field_instances['node-credentials-field_credential'] = array(
    'bundle' => 'credentials',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_credential',
    'label' => 'Credential',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf txt docx doc',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-credentials-field_date'.
  $field_instances['node-credentials-field_date'] = array(
    'bundle' => 'credentials',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-credentials-field_function'.
  $field_instances['node-credentials-field_function'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_function',
    'label' => 'Function',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-credentials-field_growth_platforms'.
  $field_instances['node-credentials-field_growth_platforms'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_growth_platforms',
    'label' => 'Growth Platforms',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-credentials-field_initiatives'.
  $field_instances['node-credentials-field_initiatives'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_initiatives',
    'label' => 'Initiatives',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-credentials-field_practice_recommended_term'.
  $field_instances['node-credentials-field_practice_recommended_term'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_practice_recommended_term',
    'label' => 'Practice Recommended',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-credentials-field_regions'.
  $field_instances['node-credentials-field_regions'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_regions',
    'label' => 'Regions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-credentials-field_sub_sector'.
  $field_instances['node-credentials-field_sub_sector'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_sub_sector',
    'label' => 'Sub-sector',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-credentials-field_tribes'.
  $field_instances['node-credentials-field_tribes'] = array(
    'bundle' => 'credentials',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tribes',
    'label' => 'Tribes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-page-field_custom_menu'.
  $field_instances['node-page-field_custom_menu'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_custom_menu',
    'label' => 'Custom menu',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_medium_quote' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => 'custom_menu',
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 5,
        '1up_text' => 6,
        '1up_text_images' => 7,
        '2up_medium' => 8,
        '2up_medium_quote' => 9,
        '2up_slant_image' => 10,
        '2up_text' => 11,
        '3up_factoid' => 12,
        '3up_factoid_item' => 13,
        '3up_list' => 14,
        '3up_list_item' => 15,
        '3up_participants_list' => 16,
        '3up_participants_list_item' => 17,
        '3up_three_column_item' => 19,
        '3up_three_columns' => 18,
        '3up_three_icon_item' => 21,
        '3up_three_icons' => 20,
        '4up_four_columns' => 22,
        '4up_four_icon_item' => 23,
        'agenda' => 24,
        'agenda_item' => 25,
        'banner_video' => 26,
        'bio_section' => 27,
        'bio_section_group' => 28,
        'company_list' => 29,
        'custom_menu' => 31,
        'custom_menu_link' => 32,
        'custommenu_updated' => 30,
        'enhanced_hero' => 33,
        'factoid' => 34,
        'factoid_item' => 35,
        'faq' => 36,
        'faq_item' => 37,
        'full_text_c' => 38,
        'gallery_item' => 39,
        'hero_image_slide' => 40,
        'image_gallery' => 41,
        'learn_more' => 42,
        'link_pop_up' => 43,
        'location_map' => 44,
        'markup_roadmap' => 45,
        'medium_hero' => 46,
        'member_list' => 48,
        'members_for_homepage' => 47,
        'minisite_headline' => 49,
        'more_posts_blog' => 50,
        'pop_up_image' => 51,
        'promo_bar' => 52,
        'quote_hero' => 53,
        'speaker' => 54,
        'speaker_item' => 56,
        'speaker_list' => 57,
        'speakers' => 55,
        'two_up_small' => 58,
        'video' => 59,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-page-field_hero_images'.
  $field_instances['node-page-field_hero_images'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_images',
    'label' => 'Hero images',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'hero_image_slide' => 'hero_image_slide',
      ),
      'bundle_weights' => array(
        'hero_image_slide' => 2,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Hero image',
      'title_multiple' => 'Hero images',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-page-field_paragraph'.
  $field_instances['node-page-field_paragraph'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_paragraph',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => '1up_image',
        '1up_medium_hero' => '1up_medium_hero',
        '1up_medium_quote' => '1up_medium_quote',
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_columns' => '2up_columns',
        '2up_columns_item' => -1,
        '2up_medium' => '2up_medium',
        '2up_medium_quote' => '2up_medium_quote',
        '2up_slant_image' => -1,
        '2up_small' => '2up_small',
        '2up_small_item' => -1,
        '2up_text' => -1,
        '3up_factoid' => '3up_factoid',
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => '3up_three_columns',
        '3up_three_icon_item' => -1,
        '3up_three_icons' => '3up_three_icons',
        '4up_four_columns' => '4up_four_columns',
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => 'banner_video',
        'banner_video_autoplay' => 'banner_video_autoplay',
        'banner_video_popup' => 'banner_video_popup',
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => 'enhanced_hero',
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => 'full_text_c',
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => 'image_gallery',
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => 'minisite_headline',
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'promo_bar' => 'promo_bar',
        'promo_quote' => 'promo_quote',
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => 'speaker_list',
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1up_hero' => -56,
        '1up_image' => 3,
        '1up_medium_hero' => -55,
        '1up_medium_quote' => 5,
        '1up_text' => 6,
        '1up_text_images' => -54,
        '2up_columns' => 216,
        '2up_columns_item' => 217,
        '2up_medium' => -53,
        '2up_medium_quote' => -52,
        '2up_slant_image' => -51,
        '2up_small' => 149,
        '2up_small_item' => 150,
        '2up_text' => 11,
        '3up_factoid' => 12,
        '3up_factoid_item' => 13,
        '3up_list' => 14,
        '3up_list_item' => 15,
        '3up_participants_list' => 16,
        '3up_participants_list_item' => 17,
        '3up_three_column_item' => -32,
        '3up_three_columns' => -49,
        '3up_three_icon_item' => -33,
        '3up_three_icons' => -48,
        '4up_four_columns' => 22,
        '4up_four_icon_item' => 23,
        'agenda' => 24,
        'agenda_item' => 25,
        'banner_video' => 26,
        'banner_video_autoplay' => 138,
        'banner_video_popup' => 85,
        'bio_section' => 27,
        'bio_section_group' => 28,
        'company_list' => 29,
        'custom_menu' => 31,
        'custom_menu_link' => 32,
        'custommenu_updated' => 30,
        'enhanced_hero' => -47,
        'factoid' => -46,
        'factoid_item' => -31,
        'faq' => -45,
        'faq_item' => -44,
        'full_text_c' => -43,
        'gallery_item' => 39,
        'hero_image_slide' => -42,
        'image_gallery' => 41,
        'learn_more' => -41,
        'link_pop_up' => 43,
        'location_map' => -40,
        'markup_roadmap' => 45,
        'medium_hero' => -39,
        'member_list' => -38,
        'members_for_homepage' => 47,
        'minisite_headline' => 49,
        'more_posts_blog' => 50,
        'pop_up_image' => 51,
        'pop_up_link' => 111,
        'promo_bar' => -37,
        'promo_quote' => 208,
        'quote_hero' => -36,
        'speaker' => -30,
        'speaker_item' => -29,
        'speaker_list' => -50,
        'speakers' => -35,
        'two_up_small' => 58,
        'video' => -34,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-video-field_length'.
  $field_instances['node-video-field_length'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_length',
    'label' => 'Length',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-video-field_video_file'.
  $field_instances['node-video-field_video_file'] = array(
    'bundle' => 'video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_video_file',
    'label' => 'Video',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-video-field_video_thumbnail'.
  $field_instances['node-video-field_video_thumbnail'] = array(
    'bundle' => 'video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_video_thumbnail',
    'label' => 'Video Thumbnail',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-webform-field_field_field_hero_images'.
  $field_instances['node-webform-field_field_field_hero_images'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_field_field_hero_images',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => '1up_hero',
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_medium_quote' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => '2up_medium',
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_small' => -1,
        '2up_small_item' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => -1,
        'banner_video_autoplay' => -1,
        'banner_video_popup' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => -1,
        'factoid' => 'factoid',
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 5,
        '1up_text' => 6,
        '1up_text_images' => 7,
        '2up_medium' => 8,
        '2up_medium_quote' => 9,
        '2up_slant_image' => 10,
        '2up_small' => 11,
        '2up_small_item' => 12,
        '2up_text' => 13,
        '3up_factoid' => 14,
        '3up_factoid_item' => 15,
        '3up_list' => 16,
        '3up_list_item' => 17,
        '3up_participants_list' => 18,
        '3up_participants_list_item' => 19,
        '3up_three_column_item' => 21,
        '3up_three_columns' => 20,
        '3up_three_icon_item' => 23,
        '3up_three_icons' => 22,
        '4up_four_columns' => 24,
        '4up_four_icon_item' => 25,
        'agenda' => 26,
        'agenda_item' => 27,
        'banner_video' => 28,
        'banner_video_autoplay' => 29,
        'banner_video_popup' => 30,
        'bio_section' => 31,
        'bio_section_group' => 32,
        'company_list' => 33,
        'custom_menu' => 35,
        'custom_menu_link' => 36,
        'custommenu_updated' => 34,
        'enhanced_hero' => 37,
        'factoid' => 38,
        'factoid_item' => 39,
        'faq' => 40,
        'faq_item' => 41,
        'full_text_c' => 42,
        'gallery_item' => 43,
        'hero_image_slide' => 44,
        'image_gallery' => 45,
        'learn_more' => 46,
        'link_pop_up' => 47,
        'location_map' => 48,
        'markup_roadmap' => 49,
        'medium_hero' => 50,
        'member_list' => 52,
        'members_for_homepage' => 51,
        'minisite_headline' => 53,
        'more_posts_blog' => 54,
        'pop_up_image' => 55,
        'pop_up_link' => 56,
        'promo_bar' => 57,
        'promo_quote' => 58,
        'quote_hero' => 59,
        'speaker' => 60,
        'speaker_item' => 62,
        'speaker_list' => 63,
        'speakers' => 61,
        'two_up_small' => 64,
        'video' => 65,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_hidden',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional keywords');
  t('Body');
  t('CST contacts');
  t('Case Study');
  t('Credential');
  t('Custom menu');
  t('Date');
  t('Email');
  t('Fee Structure');
  t('Function');
  t('Go & See Available');
  t('Growth Platforms');
  t('Hero images');
  t('ID');
  t('Initiatives');
  t('LOP');
  t('Length');
  t('Number of Pages');
  t('Paragraph');
  t('Practice Recommended');
  t('Reference Case');
  t('Regions');
  t('Related Documents');
  t('Sub-sector');
  t('Team Structure');
  t('Tribes');
  t('Video');
  t('Video Thumbnail');
  t('Videos');

  return $field_instances;
}
