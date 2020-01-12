<?php

/**
 * Implements hook_theme().
 */

function mck_know_theme() {
  $items = array(
    'custom_main_menu' => array(
      'template' => 'templates/main_menu/custom-main-menu',
    ),
    'slide_menu' => array(
      'template' => 'templates/slide_menu/slide-menu',
    ),
    'views' => array(
      'template' => 'templates/views/views',
    ),
    'search' => array(
      'template' => 'templates/search/search',
    )
  );

  $menu_types = array(
    'industries',
    'business',
    'global',
    'locations',
    'careers',
    'about',
  );

  foreach ($menu_types as $menu_type) {
    $items['custom_main_menu_' . $menu_type] = array(
      'template' => 'templates/main_menu/custom-main-menu-' . $menu_type,
      'variables' => array('items' => array()),
    );
  }

  foreach ($menu_types as $menu_type) {
    $items['slide_menu_' . $menu_type] = array(
      'template' => 'templates/slide_menu/slide-menu-' . $menu_type,
      'variables' => array('item' => array()),
    );
  }

  return $items;
}

function mck_know_path() {
  global $base_path;

  return $base_path . drupal_get_path('theme', 'mck_know');
}

function mck_know_preprocess_html(array &$vars) {
  $key = (isset($vars['page']['content']['system_main']['nodes']) && !empty($vars['page']['content']['system_main']['nodes'])) ? array_keys($vars['page']['content']['system_main']['nodes']) : NULL;
  $nid = $key[0];
  $node = node_load($nid);
  $vars['theme_header_title_color'] = (isset($node->field_theme_header_font_color) && !empty($node->field_theme_header_font_color)) ? $node->field_theme_header_font_color['und'][0]['rgb'] : NULL;
  $vars['theme_header_body_color'] = (isset($node->field_theme_header_font_color) && !empty($node->field_theme_header_font_color)) ? $node->field_theme_header_font_color['und'][1]['rgb'] : NULL;
  $vars['theme_font_color'] = (isset($node->field_theme_font_color) && !empty($node->field_theme_font_color)) ? $node->field_theme_font_color['und'][0]['rgb'] : NULL;
  $vars['theme_bg_color'] = (isset($node->field_theme_bg_color) && !empty($node->field_theme_bg_color)) ? $node->field_theme_bg_color['und'][0]['rgb'] : NULL;

   $path = drupal_get_path_alias();
  $aliases = explode('/', $path);

  foreach($aliases as $alias) {
    $vars['classes_array'][] = drupal_clean_css_identifier($alias);
  } 
  
}

function mck_know_preprocess_page(array &$variables) {

  if ( (arg(0) == "my-case-studies") || ( (arg(0) == "globalmands")   &&  (arg(1) == "my-case-studies") )) {
    drupal_set_title('My Case studies');
  }

  if (isset($variables['node']->type) && !empty($variables['node']->type) && $variables['node']->type == "webform") {
    $variables['theme_hook_suggestions'][] = 'page__type__' . $variables['node']->type;
  } 
}

function mck_know_preprocess_node(array &$vars) {
  switch ($vars['type']) {
    case 'page':
      $alias = drupal_get_path_alias();
      if (current_path() != $alias) {
        $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . str_replace('-', '_', $alias);
      }
      break;
  }
  $search_box = drupal_render(drupal_get_form('search_block_form'));
  $vars['search_box'] = $search_box;
}


function mck_know_preprocess_field(array &$vars) {
  if ($vars['element']['#field_name'] == 'field_paragraph') {
   
  }
}

function mck_know_preprocess_custom_main_menu(array &$vars) {
  $vars['main_menu'] = menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu'));
}

function mck_know_preprocess_slide_menu(array &$vars) {
  mck_know_preprocess_custom_main_menu($vars);
}

function mck_know_preprocess_slide_menu_industries(array &$vars) {
  $vars['items'] = $vars['item']['below'];
  $vars['role_id'] = drupal_clean_css_identifier($vars['item']['link']['title']);
}

function mck_know_preprocess_slide_menu_business(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_global(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_locations(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_careers(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_about(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}


function mck_know_paragraphs_view($variables) {
   $element = $variables['element'];
   return $element['#children'];
}


function mck_know_form_alter(&$form, &$form_state, $form_id) {
  global $user;
  switch ($form_id) {
    case "search_block_form":
      $form['search_block_form']['#attributes']['placeholder'] = 'Search for resources...';
      $form['actions']['submit']['#type'] = 'image_button';
      /*if (drupal_is_front_page() || arg(0) == 'front') {
        $form['actions']['submit']['#src'] = drupal_get_path('theme', 'mck_know') . '/images/search1.png';
      } else {
        $form['actions']['submit']['#src'] = drupal_get_path('theme', 'mck_know') . '/images/search.png';
      }*/
       $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search keyword'); return false; }";
      $form['actions']['submit']['#src'] = drupal_get_path('theme', 'mck_know') . '/images/search.png';
      break;
    case "comment_node_article_form":
      $form['actions']['submit']['#value'] = 'Submit';
      $form['comment_body'][LANGUAGE_NONE][0]['#attributes']['placeholder'] = 'Add to the conversation now...';
      break;
    case "views_exposed_form":
      if ($form['#id'] == 'views-exposed-form-search-m-s-page')  {
        if (isset($form_state['input']['keyword'])) {
          $form_state['input']['search_block_form'] = $form_state['input']['keyword'];
        }
      }
      break;
  }
}

function mck_term_name_by_id($tid) {
  $term = taxonomy_term_load($tid);
  return $term->name;
}

function mck_know_views_pre_render(&$view) {
  if ($view->name == 'case_studies') {
    if ($view->current_display == 'page_1' || $view->current_display == 'page') {
      $nids = array();
      foreach ($view->result as $key => $result) {

      }
    }
  }
}

function file_create_url_on_globalmands($uri) {

  if(function_exists('sso_basepath_sso_or_not') && sso_basepath_sso_or_not() === TRUE) {
      $var_base = variable_get('sso_config_base_path');
      $var_domain = variable_get('sso_config_domain');
      $sso_base_url = $var_domain . substr($var_base, 0, -1);
      $base_path = $sso_base_url . '/';
  } else {
      $sso_base_url = $options['base_url'];
      $base_path = base_path();
  }

   // Allow the URI to be altered, e.g. to serve a file from a CDN or static
  // file server.
  drupal_alter('file_url', $uri);
  $scheme = file_uri_scheme($uri);
  $file_name = explode("public://", $uri);
  
  return $base_path . 'sites/default/files/' . $file_name[1];
}

function sso_base_url() {

  if(function_exists('sso_basepath_sso_or_not') && sso_basepath_sso_or_not() === TRUE) {
      $var_base = variable_get('sso_config_base_path');
      $var_domain = variable_get('sso_config_domain');
      $sso_base_url = $var_domain . substr($var_base, 0, -1);
      $base_path = $sso_base_url . '/';
  } else {
      $sso_base_url = $options['base_url'];
      $base_path = base_path();
  }
  return $base_path;
}
