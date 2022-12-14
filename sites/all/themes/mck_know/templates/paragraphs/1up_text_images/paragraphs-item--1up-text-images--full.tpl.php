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

?>

<div class="wrapper">

  <section class="up one-up up-left">

    <article class="text-m block-list -no-dek">
          <?php if (isset($content['field_title'])) : ?>
          <h2 class="headline main-heading" style="text-align: center;"">
            <?php echo render($content['field_title']); ?>
          </h2>
<?php endif; ?>

      <div class="item">

        <div class="text-wrapper">
          <?php if (isset($content['field_text_headline'])) : ?>
          <h4 class="headline">
            <?php echo render($content['field_text_headline']); ?>
          </h4>
          <?php endif; ?>
          <p>
            <?php echo render($content['field_text_paragraph']); ?>
          </p>
        </div>

        <div class="image">
          <div class="grid">
            <figure class="thumbnail">
              <?php echo render($content['field_thumbnail_left']); ?>
            </figure>
            <figure class="thumbnail">
              <?php echo render($content['field_thumbnail_right']); ?>
            </figure>
            <figure class="full">
              <?php echo render($content['field_full_image']); ?>
            </figure>
          </div>
        </div>
      </div>
    </article></section>
</div>
