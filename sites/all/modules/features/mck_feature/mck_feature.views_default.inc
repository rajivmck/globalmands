<?php

/**
 * @file
 * mck_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mck_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bulk_update';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulk Update';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulk Update';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'views_bulk_operations' => 'views_bulk_operations',
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'term_node_tid' => 'term_node_tid',
    'uid' => 'uid',
    'field_case_id' => 'field_case_id',
    'field_categories' => 'field_categories',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_categories' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary with an additional token to change the items/page */
  $handler->display->display_options['header']['webform_result']['id'] = 'webform_result';
  $handler->display->display_options['header']['webform_result']['table'] = 'views';
  $handler->display->display_options['header']['webform_result']['field'] = 'webform_result';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* Field: Bulk operations: Content revision */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_case_id']['id'] = 'field_case_id';
  $handler->display->display_options['fields']['field_case_id']['table'] = 'field_data_field_case_id';
  $handler->display->display_options['fields']['field_case_id']['field'] = 'field_case_id';
  $handler->display->display_options['fields']['field_case_id']['label'] = 'Case ID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['type'] = 'ol';
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'case_industries' => 0,
    'categories' => 0,
    'compass' => 0,
    'industry' => 0,
    'lop_tool_kit' => 0,
    'region' => 0,
    'service_line' => 0,
    'tags' => 0,
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_categories']['id'] = 'field_categories';
  $handler->display->display_options['fields']['field_categories']['table'] = 'field_data_field_categories';
  $handler->display->display_options['fields']['field_categories']['field'] = 'field_categories';
  $handler->display->display_options['fields']['field_categories']['label'] = 'Categories';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_case_id_value']['id'] = 'field_case_id_value';
  $handler->display->display_options['arguments']['field_case_id_value']['table'] = 'field_data_field_case_id';
  $handler->display->display_options['arguments']['field_case_id_value']['field'] = 'field_case_id_value';
  $handler->display->display_options['arguments']['field_case_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_case_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_case_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_case_id_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_categories_tid']['id'] = 'field_categories_tid';
  $handler->display->display_options['arguments']['field_categories_tid']['table'] = 'field_data_field_categories';
  $handler->display->display_options['arguments']['field_categories_tid']['field'] = 'field_categories_tid';
  $handler->display->display_options['arguments']['field_categories_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_categories_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_case_id_value']['id'] = 'field_case_id_value';
  $handler->display->display_options['filters']['field_case_id_value']['table'] = 'field_data_field_case_id';
  $handler->display->display_options['filters']['field_case_id_value']['field'] = 'field_case_id_value';
  $handler->display->display_options['filters']['field_case_id_value']['operator'] = 'starts';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'bulk-update';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Bulk Update';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['bulk_update'] = $view;

  $view = new view();
  $view->name = 'case_study';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Study';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Case Study';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'field_practice_recommended_term_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_function_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_growth_platforms_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_initiatives_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_regions_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_sub_sector_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_tribes_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="row">
<div class="col-lg-4">
<span class="border-right-view">
@total Case Studies
</span>
<span class="go-and-see-title">Go and See Available</span>
</div>

<div class="col-lg-8">
<div class="float-right">
<span id="select-placeholder"></span>
<span class="view">View</span>
<i data-view="card-view" class="grid-display display-view fas fa-th-large"></i>
<i data-view="table-view" class="list-display display-view fas fa-list"></i>
</div>
</div>
</div>
';
  /* Field: Content: ID */
  $handler->display->display_options['fields']['field_id']['id'] = 'field_id';
  $handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
  $handler->display->display_options['fields']['field_id']['field'] = 'field_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: CST contacts */
  $handler->display->display_options['fields']['field_cst_contacts']['id'] = 'field_cst_contacts';
  $handler->display->display_options['fields']['field_cst_contacts']['table'] = 'field_data_field_cst_contacts';
  $handler->display->display_options['fields']['field_cst_contacts']['field'] = 'field_cst_contacts';
  $handler->display->display_options['fields']['field_cst_contacts']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_cst_contacts']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'full_date_year',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tribes */
  $handler->display->display_options['fields']['field_tribes']['id'] = 'field_tribes';
  $handler->display->display_options['fields']['field_tribes']['table'] = 'field_data_field_tribes';
  $handler->display->display_options['fields']['field_tribes']['field'] = 'field_tribes';
  $handler->display->display_options['fields']['field_tribes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tribes']['delta_offset'] = '0';
  /* Field: Content: Regions */
  $handler->display->display_options['fields']['field_regions']['id'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['table'] = 'field_data_field_regions';
  $handler->display->display_options['fields']['field_regions']['field'] = 'field_regions';
  $handler->display->display_options['fields']['field_regions']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_regions']['delta_offset'] = '0';
  /* Field: Content: Go & See Available */
  $handler->display->display_options['fields']['field_go_see_available']['id'] = 'field_go_see_available';
  $handler->display->display_options['fields']['field_go_see_available']['table'] = 'field_data_field_go_see_available';
  $handler->display->display_options['fields']['field_go_see_available']['field'] = 'field_go_see_available';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Bookmark';
  /* Field: Content: Number of Pages */
  $handler->display->display_options['fields']['field_number_of_pages']['id'] = 'field_number_of_pages';
  $handler->display->display_options['fields']['field_number_of_pages']['table'] = 'field_data_field_number_of_pages';
  $handler->display->display_options['fields']['field_number_of_pages']['field'] = 'field_number_of_pages';
  $handler->display->display_options['fields']['field_number_of_pages']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Case Study */
  $handler->display->display_options['fields']['field_case_study']['id'] = 'field_case_study';
  $handler->display->display_options['fields']['field_case_study']['table'] = 'field_data_field_case_study';
  $handler->display->display_options['fields']['field_case_study']['field'] = 'field_case_study';
  $handler->display->display_options['fields']['field_case_study']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_case_study']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_value']['expose']['label'] = 'Date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Practice Recommended (field_practice_recommended_term) */
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['id'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['table'] = 'field_data_field_practice_recommended_term';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['field'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator_id'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['label'] = 'Practice Recommended';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['identifier'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['vocabulary'] = 'practice_recommended';
  /* Filter criterion: Content: Function (field_function) */
  $handler->display->display_options['filters']['field_function_tid']['id'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['table'] = 'field_data_field_function';
  $handler->display->display_options['filters']['field_function_tid']['field'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator_id'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['label'] = 'Function';
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['identifier'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_function_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_function_tid']['vocabulary'] = 'function';
  /* Filter criterion: Content: Growth Platforms (field_growth_platforms) */
  $handler->display->display_options['filters']['field_growth_platforms_tid']['id'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['table'] = 'field_data_field_growth_platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['field'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator_id'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['label'] = 'Growth Platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['identifier'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_growth_platforms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['vocabulary'] = 'growth_platforms';
  /* Filter criterion: Content: Initiatives (field_initiatives) */
  $handler->display->display_options['filters']['field_initiatives_tid']['id'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['table'] = 'field_data_field_initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['field'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator_id'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['label'] = 'Initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['identifier'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_initiatives_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_initiatives_tid']['vocabulary'] = 'initiatives';
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Regions';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Sub-sector (field_sub_sector) */
  $handler->display->display_options['filters']['field_sub_sector_tid']['id'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['table'] = 'field_data_field_sub_sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['field'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator_id'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['label'] = 'Sub-sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['identifier'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sub_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_sector_tid']['vocabulary'] = 'sub_sector';
  /* Filter criterion: Content: Tribes (field_tribes) */
  $handler->display->display_options['filters']['field_tribes_tid']['id'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['table'] = 'field_data_field_tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['field'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator_id'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['label'] = 'Tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['identifier'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_tribes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tribes_tid']['vocabulary'] = 'tribes';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'case-studies';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Case Studies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['case_study'] = $view;

  $view = new view();
  $view->name = 'credentials_new';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Credentials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'field_practice_recommended_term_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_function_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_growth_platforms_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_initiatives_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_regions_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_sub_sector_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_tribes_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_credential' => 'field_credential',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credential' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="row">
<div class="col-lg-4">
@total Credentials
</div>

<div class="col-lg-8">
<div class="float-right">
<span id="select-placeholder"></span>
<span class="view">View</span>
<i data-view="card-view" class="grid-display display-view fas fa-th-large"></i>
<i data-view="table-view" class="list-display display-view fas fa-list"></i>
</div>
</div>
</div>
';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'full_date_year',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Credential */
  $handler->display->display_options['fields']['field_credential']['id'] = 'field_credential';
  $handler->display->display_options['fields']['field_credential']['table'] = 'field_data_field_credential';
  $handler->display->display_options['fields']['field_credential']['field'] = 'field_credential';
  $handler->display->display_options['fields']['field_credential']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_credential']['type'] = 'file_url_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Bookmark';
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_date_value']['expose']['label'] = 'Date';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'credentials' => 'credentials',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Practice Recommended (field_practice_recommended_term) */
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['id'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['table'] = 'field_data_field_practice_recommended_term';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['field'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator_id'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['label'] = 'Filters';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['identifier'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['vocabulary'] = 'practice_recommended';
  /* Filter criterion: Content: Function (field_function) */
  $handler->display->display_options['filters']['field_function_tid']['id'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['table'] = 'field_data_field_function';
  $handler->display->display_options['filters']['field_function_tid']['field'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_function_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator_id'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['label'] = 'Function';
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['identifier'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_function_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_function_tid']['vocabulary'] = 'function';
  $handler->display->display_options['filters']['field_function_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Growth Platforms (field_growth_platforms) */
  $handler->display->display_options['filters']['field_growth_platforms_tid']['id'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['table'] = 'field_data_field_growth_platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['field'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator_id'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['label'] = 'Growth Platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['identifier'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_growth_platforms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['vocabulary'] = 'growth_platforms';
  /* Filter criterion: Content: Initiatives (field_initiatives) */
  $handler->display->display_options['filters']['field_initiatives_tid']['id'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['table'] = 'field_data_field_initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['field'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_initiatives_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator_id'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['label'] = 'Initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['identifier'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_initiatives_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_initiatives_tid']['vocabulary'] = 'initiatives';
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Regions';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Sub-sector (field_sub_sector) */
  $handler->display->display_options['filters']['field_sub_sector_tid']['id'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['table'] = 'field_data_field_sub_sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['field'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sub_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator_id'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['label'] = 'Sub-sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['identifier'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sub_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_sector_tid']['vocabulary'] = 'sub_sector';
  /* Filter criterion: Content: Tribes (field_tribes) */
  $handler->display->display_options['filters']['field_tribes_tid']['id'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['table'] = 'field_data_field_tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['field'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tribes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator_id'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['label'] = 'Tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['identifier'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_tribes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tribes_tid']['vocabulary'] = 'tribes';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'credentials';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Credentials';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['credentials_new'] = $view;

  $view = new view();
  $view->name = 'my_bookmarks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'My Bookmarks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Bookmarks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_practice_recommended_term_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_function_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_growth_platforms_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_initiatives_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_regions_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_sub_sector_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_tribes_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_case_study' => 'field_case_study',
    'field_credential' => 'field_credential',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_case_study' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credential' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="row">
<div class="col-lg-4">
<span>
@total Bookmarks
</span>
</div>

<div class="col-lg-8">
<div class="float-right">
<span class="view">View</span>
<i data-view="table-view" class="list-display display-view fas fa-list"></i>
</div>
</div>
</div>
';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bookmarks_target_id']['id'] = 'field_bookmarks_target_id';
  $handler->display->display_options['relationships']['field_bookmarks_target_id']['table'] = 'field_data_field_bookmarks';
  $handler->display->display_options['relationships']['field_bookmarks_target_id']['field'] = 'field_bookmarks_target_id';
  $handler->display->display_options['relationships']['field_bookmarks_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_bookmarks_target_id';
  /* Field: Content: Case Study */
  $handler->display->display_options['fields']['field_case_study']['id'] = 'field_case_study';
  $handler->display->display_options['fields']['field_case_study']['table'] = 'field_data_field_case_study';
  $handler->display->display_options['fields']['field_case_study']['field'] = 'field_case_study';
  $handler->display->display_options['fields']['field_case_study']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['fields']['field_case_study']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_case_study']['type'] = 'file_url_plain';
  /* Field: Content: Credential */
  $handler->display->display_options['fields']['field_credential']['id'] = 'field_credential';
  $handler->display->display_options['fields']['field_credential']['table'] = 'field_data_field_credential';
  $handler->display->display_options['fields']['field_credential']['field'] = 'field_credential';
  $handler->display->display_options['fields']['field_credential']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['fields']['field_credential']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_credential']['type'] = 'file_url_plain';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['fields']['field_video_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_file']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_bookmarks_target_id';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Practice Recommended (field_practice_recommended_term) */
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['id'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['table'] = 'field_data_field_practice_recommended_term';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['field'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator_id'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['label'] = 'Practice Recommended';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['identifier'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['vocabulary'] = 'practice_recommended';
  /* Filter criterion: Content: Function (field_function) */
  $handler->display->display_options['filters']['field_function_tid']['id'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['table'] = 'field_data_field_function';
  $handler->display->display_options['filters']['field_function_tid']['field'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_function_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_function_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator_id'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['label'] = 'Function';
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['identifier'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_function_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_function_tid']['vocabulary'] = 'function';
  /* Filter criterion: Content: Growth Platforms (field_growth_platforms) */
  $handler->display->display_options['filters']['field_growth_platforms_tid']['id'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['table'] = 'field_data_field_growth_platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['field'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator_id'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['label'] = 'Growth Platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['identifier'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_growth_platforms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['vocabulary'] = 'growth_platforms';
  /* Filter criterion: Content: Initiatives (field_initiatives) */
  $handler->display->display_options['filters']['field_initiatives_tid']['id'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['table'] = 'field_data_field_initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['field'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_initiatives_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator_id'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['label'] = 'Initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['identifier'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_initiatives_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_initiatives_tid']['vocabulary'] = 'initiatives';
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Regions';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Sub-sector (field_sub_sector) */
  $handler->display->display_options['filters']['field_sub_sector_tid']['id'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['table'] = 'field_data_field_sub_sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['field'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_sub_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator_id'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['label'] = 'Sub-sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['identifier'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sub_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_sector_tid']['vocabulary'] = 'sub_sector';
  /* Filter criterion: Content: Tribes (field_tribes) */
  $handler->display->display_options['filters']['field_tribes_tid']['id'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['table'] = 'field_data_field_tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['field'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_tribes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator_id'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['label'] = 'Tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['identifier'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_tribes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tribes_tid']['vocabulary'] = 'tribes';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Practice Recommended (field_practice_recommended_term) */
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['id'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['table'] = 'field_data_field_practice_recommended_term';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['field'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator_id'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['label'] = 'Practice Recommended';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['identifier'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['vocabulary'] = 'practice_recommended';
  /* Filter criterion: Content: Function (field_function) */
  $handler->display->display_options['filters']['field_function_tid']['id'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['table'] = 'field_data_field_function';
  $handler->display->display_options['filters']['field_function_tid']['field'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_function_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_function_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator_id'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['label'] = 'Function';
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['identifier'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_function_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_function_tid']['vocabulary'] = 'function';
  /* Filter criterion: Content: Growth Platforms (field_growth_platforms) */
  $handler->display->display_options['filters']['field_growth_platforms_tid']['id'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['table'] = 'field_data_field_growth_platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['field'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator_id'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['label'] = 'Growth Platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['identifier'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_growth_platforms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['vocabulary'] = 'growth_platforms';
  /* Filter criterion: Content: Initiatives (field_initiatives) */
  $handler->display->display_options['filters']['field_initiatives_tid']['id'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['table'] = 'field_data_field_initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['field'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_initiatives_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator_id'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['label'] = 'Initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['identifier'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_initiatives_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_initiatives_tid']['vocabulary'] = 'initiatives';
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Regions';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Sub-sector (field_sub_sector) */
  $handler->display->display_options['filters']['field_sub_sector_tid']['id'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['table'] = 'field_data_field_sub_sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['field'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_sub_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator_id'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['label'] = 'Sub-sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['identifier'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sub_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_sector_tid']['vocabulary'] = 'sub_sector';
  /* Filter criterion: Content: Tribes (field_tribes) */
  $handler->display->display_options['filters']['field_tribes_tid']['id'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['table'] = 'field_data_field_tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['field'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['field_tribes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator_id'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['label'] = 'Tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['identifier'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_tribes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tribes_tid']['vocabulary'] = 'tribes';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_bookmarks_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
    'credentials' => 'credentials',
    'video' => 'video',
  );
  $handler->display->display_options['path'] = 'my-bookmarks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bookmarks';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_bookmarks'] = $view;

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sub_categories',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'main-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_tags']['element_class'] = 'doc-tags';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_urls']['id'] = 'field_urls';
  $handler->display->display_options['fields']['field_urls']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_urls']['field'] = 'field_urls';
  $handler->display->display_options['fields']['field_urls']['label'] = '';
  $handler->display->display_options['fields']['field_urls']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_urls']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_urls']['element_default_classes'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_urls]" target="blank">[title]</a>';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'doc-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_date_published']['id'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_date_published']['field'] = 'field_date_published';
  $handler->display->display_options['fields']['field_date_published']['label'] = '';
  $handler->display->display_options['fields']['field_date_published']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_published']['alter']['text'] = '[field_date_published]';
  $handler->display->display_options['fields']['field_date_published']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_date_published']['element_class'] = 'doc-inline doc-pages';
  $handler->display->display_options['fields']['field_date_published']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_pages']['id'] = 'field_pages';
  $handler->display->display_options['fields']['field_pages']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_pages']['field'] = 'field_pages';
  $handler->display->display_options['fields']['field_pages']['label'] = '';
  $handler->display->display_options['fields']['field_pages']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pages']['alter']['text'] = '| [field_pages] Pages';
  $handler->display->display_options['fields']['field_pages']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_pages']['element_class'] = 'doc-inline doc-pages';
  $handler->display->display_options['fields']['field_pages']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_size']['id'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_size']['field'] = 'field_size';
  $handler->display->display_options['fields']['field_size']['label'] = '';
  $handler->display->display_options['fields']['field_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_size']['alter']['text'] = '| [field_size] MB | <a class="doc-download" href="[field_urls]"> <span><i class="far fa-arrow-alt-circle-down"></i></span>Download</a>';
  $handler->display->display_options['fields']['field_size']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_size']['element_class'] = 'doc-inline doc-size';
  $handler->display->display_options['fields']['field_size']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'doc-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_document']['id'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_document']['field'] = 'field_document';
  $handler->display->display_options['fields']['field_document']['label'] = '';
  $handler->display->display_options['fields']['field_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_sub_categories']['id'] = 'field_sub_categories';
  $handler->display->display_options['fields']['field_sub_categories']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_sub_categories']['field'] = 'field_sub_categories';
  $handler->display->display_options['fields']['field_sub_categories']['label'] = '';
  $handler->display->display_options['fields']['field_sub_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_categories']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_sub_categories']['element_class'] = 'sub-category';
  $handler->display->display_options['fields']['field_sub_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_paragraph:field_answer' => 'field_paragraph:field_answer',
    'field_paragraph:field_column_title' => 'field_paragraph:field_column_title',
    'field_paragraph:field_heading' => 'field_paragraph:field_heading',
    'field_paragraph:field_hero_description' => 'field_paragraph:field_hero_description',
    'field_paragraph:field_hero_headline' => 'field_paragraph:field_hero_headline',
    'field_paragraph:field_name' => 'field_paragraph:field_name',
    'field_paragraph:field_paragraph:field_answer' => 'field_paragraph:field_paragraph:field_answer',
    'field_paragraph:field_paragraph:field_column_title' => 'field_paragraph:field_paragraph:field_column_title',
    'field_paragraph:field_paragraph:field_hero_description' => 'field_paragraph:field_paragraph:field_hero_description',
    'field_paragraph:field_paragraph:field_hero_headline' => 'field_paragraph:field_paragraph:field_hero_headline',
    'field_paragraph:field_paragraph:field_question' => 'field_paragraph:field_paragraph:field_question',
    'field_paragraph:field_paragraph:field_text_headline' => 'field_paragraph:field_paragraph:field_text_headline',
    'field_paragraph:field_paragraph:field_text_quote' => 'field_paragraph:field_paragraph:field_text_quote',
    'field_paragraph:field_paragraph:field_text_quote_byline' => 'field_paragraph:field_paragraph:field_text_quote_byline',
    'field_paragraph:field_paragraph:field_title' => 'field_paragraph:field_paragraph:field_title',
    'field_paragraph:field_question' => 'field_paragraph:field_question',
    'field_paragraph:field_text_headline' => 'field_paragraph:field_text_headline',
    'field_paragraph:field_text_paragraph:value' => 'field_paragraph:field_text_paragraph:value',
    'field_paragraph:field_text_quote' => 'field_paragraph:field_text_quote',
    'field_paragraph:field_text_quote_byline' => 'field_paragraph:field_text_quote_byline',
    'field_paragraph:field_title' => 'field_paragraph:field_title',
    'field_sector:name' => 'field_sector:name',
    'field_sub_categories:name' => 'field_sub_categories:name',
    'field_tags:name' => 'field_tags:name',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
  );
  $handler->display->display_options['path'] = 'search';
  $export['search'] = $view;

  $view = new view();
  $view->name = 'search_m_s';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search M&S';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'RELATED';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'bef_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'field_type_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_recommended_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_service_line_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_regions_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_industries_tid' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-lg-6 col-md-6 col-sm-12';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['label'] = '';
  $handler->display->display_options['fields']['field_type']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_type']['element_class'] = 'type-link';
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_download']['id'] = 'field_download';
  $handler->display->display_options['fields']['field_download']['table'] = 'field_data_field_download';
  $handler->display->display_options['fields']['field_download']['field'] = 'field_download';
  $handler->display->display_options['fields']['field_download']['label'] = '';
  $handler->display->display_options['fields']['field_download']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_download']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_download']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_download']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_download']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_download']['alter']['link_class'] = 'mck-icon__download video-popup';
  $handler->display->display_options['fields']['field_download']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_download']['element_class'] = 'download-icon file';
  $handler->display->display_options['fields']['field_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download']['hide_empty'] = TRUE;
  /* Field: Paragraphs item: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<a href="[field_link]" class="link-icon" target="_blank"></a>';
  $handler->display->display_options['fields']['field_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['link_class'] = 'link-icon';
  $handler->display->display_options['fields']['field_link']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_link']['element_class'] = 'download-icon';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span href="#" class="star-icon" data-nid="[nid]"></span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'bookmark';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="node/[nid]" class="video-popup">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'video-popup';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'doc-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'doc-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_service_line']['id'] = 'field_service_line';
  $handler->display->display_options['fields']['field_service_line']['table'] = 'field_data_field_service_line';
  $handler->display->display_options['fields']['field_service_line']['field'] = 'field_service_line';
  $handler->display->display_options['fields']['field_service_line']['label'] = '';
  $handler->display->display_options['fields']['field_service_line']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_line']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Video */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['text'] = '<div class="video-link">
  <a href="[field_file]" class="video-popup"><img src="./sites/all/themes/mck_know/images/testimonial-icon.png"/></a>
</div>';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_file']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_file']['delta_offset'] = '0';
  /* Field: Paragraphs item: Video Link */
  $handler->display->display_options['fields']['field_urls']['id'] = 'field_urls';
  $handler->display->display_options['fields']['field_urls']['table'] = 'field_data_field_urls';
  $handler->display->display_options['fields']['field_urls']['field'] = 'field_urls';
  $handler->display->display_options['fields']['field_urls']['label'] = '';
  $handler->display->display_options['fields']['field_urls']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_urls']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_urls']['alter']['text'] = '<div class="video-link">
  <a href="[field_urls]" class="video-popup"><img src="./sites/all/themes/mck_know/images/testimonial-icon.png"/></a>
</div>';
  $handler->display->display_options['fields']['field_urls']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_urls']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_urls']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_urls']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_urls']['type'] = 'link_plain';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_growth_related']['id'] = 'field_growth_related';
  $handler->display->display_options['fields']['field_growth_related']['table'] = 'field_data_field_growth_related';
  $handler->display->display_options['fields']['field_growth_related']['field'] = 'field_growth_related';
  $handler->display->display_options['fields']['field_growth_related']['label'] = '';
  $handler->display->display_options['fields']['field_growth_related']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_growth_related']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_growth_related']['alter']['text'] = '<div class="growth-related"><img src="./sites/all/themes/mck_know/images/growth-dark-bg.png"></div>';
  $handler->display->display_options['fields']['field_growth_related']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_growth_related']['element_class'] = 'growth-related';
  $handler->display->display_options['fields']['field_growth_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_growth_related']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_growth_related']['empty_zero'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_compass']['id'] = 'field_compass';
  $handler->display->display_options['fields']['field_compass']['table'] = 'field_data_field_compass';
  $handler->display->display_options['fields']['field_compass']['field'] = 'field_compass';
  $handler->display->display_options['fields']['field_compass']['label'] = '';
  $handler->display->display_options['fields']['field_compass']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_compass']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_compass']['alter']['text'] = '<div class="compass"><img src="./sites/all/themes/mck_know/images/pricing-1.png"/></div>';
  $handler->display->display_options['fields']['field_compass']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_compass']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_compass']['empty_zero'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="row">
		<div class="col-md-8">
			<div class="bottom-tags">

			  [field_service_line]
			</div>
		</div>
		<div class="col-md-4">

				<div class="bottom-links">
				  <ul>
				  	<li>[field_file]</li>
				  	<li> [field_growth_related]</li>
				  	<li>[field_compass]</li>
				  </ul>

				</div>
		</div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'bottom-box';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Added date';
  /* Sort criterion: Content: Body (body:format) */
  $handler->display->display_options['sorts']['body_format']['id'] = 'body_format';
  $handler->display->display_options['sorts']['body_format']['table'] = 'field_data_body';
  $handler->display->display_options['sorts']['body_format']['field'] = 'body_format';
  $handler->display->display_options['sorts']['body_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['body_format']['expose']['label'] = 'Summary';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Results';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_year_case_was_tapped_value']['id'] = 'field_year_case_was_tapped_value';
  $handler->display->display_options['sorts']['field_year_case_was_tapped_value']['table'] = 'field_data_field_year_case_was_tapped';
  $handler->display->display_options['sorts']['field_year_case_was_tapped_value']['field'] = 'field_year_case_was_tapped_value';
  $handler->display->display_options['sorts']['field_year_case_was_tapped_value']['order'] = 'DESC';
  /* Sort criterion: Content: Body (body:format) */
  $handler->display->display_options['sorts']['body_format']['id'] = 'body_format';
  $handler->display->display_options['sorts']['body_format']['table'] = 'field_data_body';
  $handler->display->display_options['sorts']['body_format']['field'] = 'body_format';
  $handler->display->display_options['sorts']['body_format']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['body_format']['expose']['label'] = 'Summary';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator_id'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['operator'] = 'field_type_tid_op';
  $handler->display->display_options['filters']['field_type_tid']['expose']['identifier'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_recommended_value']['id'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['table'] = 'field_data_field_recommended';
  $handler->display->display_options['filters']['field_recommended_value']['field'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_recommended_value']['expose']['operator_id'] = 'field_recommended_value_op';
  $handler->display->display_options['filters']['field_recommended_value']['expose']['operator'] = 'field_recommended_value_op';
  $handler->display->display_options['filters']['field_recommended_value']['expose']['identifier'] = 'field_recommended_value';
  $handler->display->display_options['filters']['field_recommended_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_service_line_tid']['id'] = 'field_service_line_tid';
  $handler->display->display_options['filters']['field_service_line_tid']['table'] = 'field_data_field_service_line';
  $handler->display->display_options['filters']['field_service_line_tid']['field'] = 'field_service_line_tid';
  $handler->display->display_options['filters']['field_service_line_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_line_tid']['expose']['operator_id'] = 'field_service_line_tid_op';
  $handler->display->display_options['filters']['field_service_line_tid']['expose']['operator'] = 'field_service_line_tid_op';
  $handler->display->display_options['filters']['field_service_line_tid']['expose']['identifier'] = 'field_service_line_tid';
  $handler->display->display_options['filters']['field_service_line_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_line_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  $handler->display->display_options['filters']['field_regions_tid']['hierarchy'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_industries_tid']['id'] = 'field_industries_tid';
  $handler->display->display_options['filters']['field_industries_tid']['table'] = 'field_data_field_industries';
  $handler->display->display_options['filters']['field_industries_tid']['field'] = 'field_industries_tid';
  $handler->display->display_options['filters']['field_industries_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industries_tid']['expose']['operator_id'] = 'field_industries_tid_op';
  $handler->display->display_options['filters']['field_industries_tid']['expose']['operator'] = 'field_industries_tid_op';
  $handler->display->display_options['filters']['field_industries_tid']['expose']['identifier'] = 'field_industries_tid';
  $handler->display->display_options['filters']['field_industries_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_industries_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'search_block_form';
  $handler->display->display_options['filters']['keys']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['path'] = 'search-mr';
  $export['search_m_s'] = $view;

  $view = new view();
  $view->name = 'videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 0,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'autosubmit' => 0,
      ),
    ),
    'field_practice_recommended_term_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_function_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_growth_platforms_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_initiatives_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_regions_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_sub_sector_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_tribes_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_credential' => 'field_credential',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_credential' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="row">
<div class="col-lg-4">
@total Videos
</div>

<div class="col-lg-8">
<div class="float-right">
<span id="select-placeholder"></span>
<span class="view">View</span>
<i data-view="card-view" class="grid-display display-view fas fa-th-large"></i>
<i data-view="table-view" class="list-display display-view fas fa-list"></i>
</div>
</div>
</div>
';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Bookmark';
  /* Field: Content: Length */
  $handler->display->display_options['fields']['field_length']['id'] = 'field_length';
  $handler->display->display_options['fields']['field_length']['table'] = 'field_data_field_length';
  $handler->display->display_options['fields']['field_length']['field'] = 'field_length';
  /* Field: Content: Video Thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'video_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video_file']['id'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['table'] = 'field_data_field_video_file';
  $handler->display->display_options['fields']['field_video_file']['field'] = 'field_video_file';
  $handler->display->display_options['fields']['field_video_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_file']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Practice Recommended (field_practice_recommended_term) */
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['id'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['table'] = 'field_data_field_practice_recommended_term';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['field'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator_id'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['label'] = 'Filters';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['operator'] = 'field_practice_recommended_term_tid_op';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['identifier'] = 'field_practice_recommended_term_tid';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_practice_recommended_term_tid']['vocabulary'] = 'practice_recommended';
  /* Filter criterion: Content: Function (field_function) */
  $handler->display->display_options['filters']['field_function_tid']['id'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['table'] = 'field_data_field_function';
  $handler->display->display_options['filters']['field_function_tid']['field'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_function_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator_id'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['label'] = 'Function';
  $handler->display->display_options['filters']['field_function_tid']['expose']['operator'] = 'field_function_tid_op';
  $handler->display->display_options['filters']['field_function_tid']['expose']['identifier'] = 'field_function_tid';
  $handler->display->display_options['filters']['field_function_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_function_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_function_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_function_tid']['vocabulary'] = 'function';
  $handler->display->display_options['filters']['field_function_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Growth Platforms (field_growth_platforms) */
  $handler->display->display_options['filters']['field_growth_platforms_tid']['id'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['table'] = 'field_data_field_growth_platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['field'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator_id'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['label'] = 'Growth Platforms';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['operator'] = 'field_growth_platforms_tid_op';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['identifier'] = 'field_growth_platforms_tid';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_growth_platforms_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_growth_platforms_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_growth_platforms_tid']['vocabulary'] = 'growth_platforms';
  /* Filter criterion: Content: Initiatives (field_initiatives) */
  $handler->display->display_options['filters']['field_initiatives_tid']['id'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['table'] = 'field_data_field_initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['field'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_initiatives_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator_id'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['label'] = 'Initiatives';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['operator'] = 'field_initiatives_tid_op';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['identifier'] = 'field_initiatives_tid';
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_initiatives_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_initiatives_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_initiatives_tid']['vocabulary'] = 'initiatives';
  /* Filter criterion: Content: Regions (field_regions) */
  $handler->display->display_options['filters']['field_regions_tid']['id'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['table'] = 'field_data_field_regions';
  $handler->display->display_options['filters']['field_regions_tid']['field'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_regions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator_id'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['label'] = 'Regions';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['operator'] = 'field_regions_tid_op';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['identifier'] = 'field_regions_tid';
  $handler->display->display_options['filters']['field_regions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_regions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_regions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_regions_tid']['vocabulary'] = 'regions';
  /* Filter criterion: Content: Sub-sector (field_sub_sector) */
  $handler->display->display_options['filters']['field_sub_sector_tid']['id'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['table'] = 'field_data_field_sub_sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['field'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sub_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator_id'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['label'] = 'Sub-sector';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['operator'] = 'field_sub_sector_tid_op';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['identifier'] = 'field_sub_sector_tid';
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sub_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sub_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sub_sector_tid']['vocabulary'] = 'sub_sector';
  /* Filter criterion: Content: Tribes (field_tribes) */
  $handler->display->display_options['filters']['field_tribes_tid']['id'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['table'] = 'field_data_field_tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['field'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tribes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator_id'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['label'] = 'Tribes';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['operator'] = 'field_tribes_tid_op';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['identifier'] = 'field_tribes_tid';
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tribes_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_tribes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tribes_tid']['vocabulary'] = 'tribes';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'videos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Videos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['videos'] = $view;

  return $export;
}
