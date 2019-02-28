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
<div class="section-wrapper">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
  <section class="up full-text-section careers section-inner-wrapper">
     <?php if (isset($content['field_heading'][0])): ?>
    <header class="text-l space">
      <h3 class="headline">
        <center>
          <?php echo render($content['field_heading']); ?>
        </center>
      </h3>
      <?php endif ?>
    </header>
      <?php if(isset($content['field_description'])){ ?>
    <div class="description section-description">
      <?php echo render($content['field_description']); ?>
    </div>
    <?php } ?>
    <div class="block-list">
      <div class="two-column text-l">
        <div class="left-column text-longform">
          <p>
            <?php echo render($content['field_text_left']); ?>
          </p>

        </div>
        <div class="right-column text-longform">
          <p>
            <?php echo render($content['field_text_right']); ?>
          </p>

        </div>
      </div>
    </div>
  </section>
</div>

