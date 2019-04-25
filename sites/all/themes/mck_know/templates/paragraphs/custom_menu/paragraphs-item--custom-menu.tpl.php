<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */


$links = isset($content['field_paragraph']) ? render($content['field_paragraph']) : '';
$bguri = isset($content['field_full_image']['#items'][0]['uri']) ? $content['field_full_image']['#items'][0]['uri'] : NULL;
$bgurl = isset($bguri) ? file_create_url($bguri) : NULL;

?>


<div class="top-bar-inner">
    <div class="global-primary-nav-r3 show-nav" data-module="PrimaryNavigation"
         role="banner">
        <nav class="primary-navigation" role="navigation">
            <ul class="nav-list nav-group-left">
              <?php echo $links; ?>
            </ul>
        </nav>
    </div>

</div>
<div class="logo-container">
  <?php if (isset($content["field_full_image"])) { ?>
      <a class="names cpny-logo alone" href="#"
         style="background-image: url('<?php echo $bgurl ?>');"><span
                  class="visually-hidden">McKinsey &amp; Company Home</span></a>
  <?php } else { ?>
      <a class="names cpny-logo alone" href="#"><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
  <?php } ?>
</div><!--END NAVIGATION MENU-->
</header>






