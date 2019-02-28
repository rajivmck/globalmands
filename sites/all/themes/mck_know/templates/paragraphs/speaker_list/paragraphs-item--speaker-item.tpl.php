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

  $description = $content['field_body'];
?>
<div class="item">
  <div class="image">
 		<?php if(isset($description) && !empty($description)) { ?>
            <a href="#" class="inline-popup">
                 <?php echo render($content['field_image']) ?>
            </a>
        <?php } else { ?>
            <?php echo render($content['field_image']) ?>
        <?php } ?>
      </div>
    <div class="text-wrapper">
      <div class="-text-center">
		<?php if(isset($description) && !empty($description)) { ?>
            <a href="#" class="inline-popup item-title-link">
                <h3 id="main_0_universal_1_ctl10_headline" class="headline ">
                    <?php echo render($content['field_title']) ?>
                </h3>
            </a>
        <?php } else { ?>
            <h3 id="main_0_universal_1_ctl10_headline" class="headline ">
                <?php echo render($content['field_title']) ?>
            </h3>
        <?php } ?>
        <hr class="grayline">
        <div class="description"><?php echo render($content['field_description']) ?></div>
    </div>
  </div>
      <div class="people-popup white-popup mfp-hide">
        <div class="profile-wrapper">
            <section class="text-xl page-header profile-header" itemtype="https://schema.org/Person">
                <div class="image">
                    <div class="circle-crop">
                        <div class="image">
                            <?php echo render($content['field_image']) ?>
                        </div>
                    </div>
                </div>
                <div class="text-wrapper">
                    <h2 class="headline" itemprop="name"><?php echo render($content['field_title']) ?></h2>
                    <small class="job-title" itemprop="jobTitle">
                        <?php print render($content['field_description']) ?>
                    </small>
                </div>
            </section>
        </div>
        <div class="profile-description">
            <?php print render($description); ?>
        </div>
    </div>
</div>
