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

$headline               = isset($content['field_text_headline']) ? render($content['field_text_headline']): '';
$image               = isset($content['field_image']) ? render($content['field_image']): '';
$title               = isset($content['field_title']) ? render($content['field_title']): '';
$description         = isset($content['field_body']) ? render($content['field_body']): '';
$link                = isset($content['field_link']) ? render($content['field_link']): '';
$downloadIcon        = $content['field_grey_row']['0']['#markup'] ? "mck-download-icon" : '';
$mediumBg   = $content['field_text_align']['0']['#markup']?"medium-img":"";
$alignImgRight        = $content['field_align_right']['0']['#markup'];
$wrapperBgColor = $content['field_text_overlays_image'][0]['#markup']?"default-wrapper-bg":"";

$link_items         = isset($content['field_links']) ? $content['field_links'] : '';
?>

<div class="section-wrapper">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<div class="wrapper oneup-image <?php echo $wrapperBgColor; ?> section-inner-wrapper">
<div id="sg-c-1up-medium" class="c-example-block  u-padding">

			<section class="up one-up up-left">
				<?php if(isset($content['field_text_headline'])){ ?>
					<h2 id="" class="section-header section-header--centered"><?php  echo $headline; ?></h2>
				<?php }?>
				<article class="text-xl block-list -no-dek">
					<div class="item">
					  <?php if(!$alignImgRight){ ?>
						<div class="image <?php echo $mediumBg; ?>">
						    <div class="thumbnail" style="background-image: url(<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>)"></div>
						</div>
						<?php } ?>
						<div class="text-wrapper">
							<h3 class="headline"><?php  echo $title; ?></h3>
							<div class="description"><?php  echo $description; ?></div>
<br/>
							<div class="cta-wrapper">
							<?php foreach($link_items as $key => $item) {
		                    if(is_numeric($key)) {
		                      $paraItem = $item['#element'];
		                       ?>
		                        <p> <a href="<?php echo $paraItem['url']; ?>" class="-arrow"><?php echo $paraItem['title']; ?></a></p>
		                      <?php } 
		                    } ?>
							<?php if(isset($content['field_link'])){ ?>
								     <p><a href="<?php echo render($content['field_link'][0]['#element']['url']) ?>" class="download-link">
									<?php echo render($content['field_link'][0]['#element']['title']) ?><span class="<?php echo $downloadIcon;?>"></span>
									</a></p>
							<?php } ?>
							</div>
						</div>
						<?php if($alignImgRight){ ?>
						<div class="image <?php echo $mediumBg; ?>"">
						    <div class="thumbnail" style="background-image: url(<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>)"></div>
						</div>
						<?php } ?>
					</div>
				</article>
			</section>

		</div>
</div>
</div>