<?php

/**
 * @file
 * mck_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mck_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_detail|node|case_study|full';
  $field_group->group_name = 'group_case_study_detail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_function',
      1 => 'field_growth_platforms',
      2 => 'field_initiatives',
      3 => 'field_practice_recommended_term',
      4 => 'field_regions',
      5 => 'field_sub_sector',
      6 => 'field_tribes',
      7 => 'field_cst_contacts',
      8 => 'field_number_of_pages',
      9 => 'field_fee_structure',
      10 => 'field_video_links',
      11 => 'field_related_documents',
      12 => 'field_team_structure',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-case-study-detail field-group-html5',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_case_study_detail|node|case_study|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_study_tab|node|case_study|form';
  $field_group->group_name = 'group_case_study_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Case Study Tabs',
    'weight' => '50',
    'children' => array(
      0 => 'group_general_info_case',
      1 => 'group_taxonomy',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-case-study-tab field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_case_study_tab|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cred_general|node|credentials|form';
  $field_group->group_name = 'group_cred_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'credentials';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_credentials_tabs';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '14',
    'children' => array(
      0 => 'field_date',
      1 => 'field_credential',
      2 => 'field_practice_recommended_term',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cred-general field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cred_general|node|credentials|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cred_taxonom|node|credentials|form';
  $field_group->group_name = 'group_cred_taxonom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'credentials';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_credentials_tabs';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '15',
    'children' => array(
      0 => 'field_function',
      1 => 'field_growth_platforms',
      2 => 'field_initiatives',
      3 => 'field_regions',
      4 => 'field_sub_sector',
      5 => 'field_tribes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cred-taxonom field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cred_taxonom|node|credentials|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_credentials_tabs|node|credentials|form';
  $field_group->group_name = 'group_credentials_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'credentials';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credentials Tabs',
    'weight' => '14',
    'children' => array(
      0 => 'group_cred_general',
      1 => 'group_cred_taxonom',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-credentials-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_credentials_tabs|node|credentials|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_info_case|node|case_study|form';
  $field_group->group_name = 'group_general_info_case';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_tab';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '50',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'field_practice_recommended_term',
      3 => 'field_cst_contacts',
      4 => 'field_go_see_available',
      5 => 'field_number_of_pages',
      6 => 'field_case_study',
      7 => 'field_id',
      8 => 'field_additional_keywords',
      9 => 'field_lop',
      10 => 'field_reference_case',
      11 => 'field_fee_structure',
      12 => 'field_video_links',
      13 => 'field_related_documents',
      14 => 'field_team_structure',
      15 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-info-case field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general_info_case|node|case_study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|case_study|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'case_study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_case_study_tab';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '51',
    'children' => array(
      0 => 'field_function',
      1 => 'field_growth_platforms',
      2 => 'field_initiatives',
      3 => 'field_regions',
      4 => 'field_sub_sector',
      5 => 'field_tribes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-taxonomy field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_taxonomy|node|case_study|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Case Study Tabs');
  t('Credentials Tabs');
  t('Details');
  t('General Information');
  t('Taxonomy');

  return $field_groups;
}
