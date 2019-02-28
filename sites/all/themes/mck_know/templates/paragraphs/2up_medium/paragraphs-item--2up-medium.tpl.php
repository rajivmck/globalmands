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
$textAlign = $content['field_grey_row'][0]['#markup']? "-text-center" : "-text-left";
$logoAlign = $content['field_align_right'][0]['#markup']? "-text-center" : "-text-left";


?>
<section id="two-up-medium" class="up two-up two-up-medium section-wrapper">
  <h2 class="section-header section-header--centered section-inner-wrapper"><?php echo render($content['field_heading']) ?></h2>
  <div class="block-list text-xl">
    <div class="item blue theme-bgc">
      <div class="item-content-wrap">
        <div class="text-wrapper">
          <?php if(isset($content['field_poster'])){ ?>
            <span class="logo <?php echo $logoAlign; ?>" style="background-image: url(<?php echo file_create_url($content['field_poster'][0]['#item']['uri']) ?>)"></span>
          <?php } ?>
          <h3 class="headline <?php echo $textAlign; ?>"><?php echo render($content['field_title']) ?></h3>
          <div class="description"><?php echo render($content['field_description']) ?></div>
            <?php echo render($content['field_link']) ?>

        </div>
      </div>
    </div>
    <div class="item mountain-bk">
      <div class="item-content-wrap no-padding">
        <div class="mountain" style="background-image: url(<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>)"></div>
      </div>
    </div>
  </div>
</section>
