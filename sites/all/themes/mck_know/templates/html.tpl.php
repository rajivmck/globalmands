<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string
 *   parts
 *   that were used to generate the $head_title variable, already prepared to
 *   be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other
 *   dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
  <?php print $head ?>
    <title><?php print $head_title ?></title>
  <?php print $styles ?>
  <?php if ((isset($theme_header_title_color) && !empty($theme_header_title_color)) || (isset($theme_font_color) && !empty($theme_font_color)) || (isset($theme_bg_color) && !empty($theme_bg_color))) { ?>
      <style type="text/css">
          <?php if(isset($theme_font_color) && !empty($theme_font_color)) { ?>
          h1, h2, h3, blockquote {
              color: <?php echo $theme_font_color; ?> !important;;
          }

          .theme-fc {
              color: <?php echo $theme_font_color; ?> !important;
          }

          <?php } ?>
          <?php if(isset($theme_header_title_color) && !empty($theme_header_title_color)) { ?>
          .theme-hfc .headline, .theme-hfc h1, .theme-hfc blockquote {
              color: <?php echo $theme_header_title_color; ?> !important;
          }

          <?php } ?>
          <?php if(isset($theme_header_body_color) && !empty($theme_header_body_color)) { ?>
          .theme-hfc .body-copy, .theme-hfc .body-copy * {
              color: <?php echo $theme_header_body_color; ?> !important;
          }

          <?php } ?>
          <?php if(isset($theme_bg_color) && !empty($theme_bg_color)) { ?>
          .theme-bgc {
              background-color: <?php echo $theme_bg_color; ?> !important;
          }

          <?php } ?>
      </style>
  <?php } ?>
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css" integrity="sha384-50oBUHEmvpQ+1lW4y57PTFmhCaXp0ML5d60M1M7uH2+nqUivzIebhndOJK28anvf" crossorigin="anonymous">
</head>
<body class="<?php print $classes ?> white" <?php print $attributes ?>>
<?php print $page_top ?>
<?php print $page ?>
<?php print $scripts ?>
<?php print $page_bottom ?>

<?php
    global $user;
    $bookmark_json = [];

    if ($user->uid) {
      $user = user_load($user->uid);
      $wrapper = entity_metadata_wrapper('user', $user);

      $bookmarks = $wrapper->field_bookmarks->value();

      foreach ($bookmarks as $bookmark) {
          $bookmark_json[] = $bookmark->nid;
      }
    }
?>
</body>
</html>
<script type="text/javascript">
    function drupal_urlencode($text) {
        if (variable_get('clean_url', '0')) {
            return str_replace(array('%2F', '%3F', '%3D', '%26', '%23'),
                array('/', '?', '=', '&', '#'),
                urlencode($text));
        } else {
            return str_replace('%2F', '/', urlencode($text));
        }
    }

    var bookmarks = <?php echo json_encode($bookmark_json); ?>
</script>
      