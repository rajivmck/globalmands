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

$videouri      = isset($content['field_file']['#items'][0]['uri']) ? $content['field_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;
$bguri         = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;

$title         = isset($content['field_title']) ? render($content['field_title']) : '';
$description   = isset($content['field_short_description']) ? render($content['field_short_description']) : '';
$bg_video      = $content['field_grey_row']['0']['#markup'] ? "background-video-wrapper" : 'media-player banner  active';
//$bg_video      = $content['field_grey_row']['0']['#markup'] ? "background-video-wrapper" : 'media-player banner  banner-video active';

//echo "<pre>"; var_dump($content); echo "</pre>";
?>
<div class="banner-video section-wrapper">
   <div class="section-inner-wrapper">
	<video id="my-video" class="video-js" controls preload="auto" data-setup="{}">
		<source src="<?php echo $videourl ?>" type='video/mp4' />
	</video>

	<div class="banner-video-overlay" style="background-image: url('<?php echo $bgurl ?>');">
		<div class="videojs-hero multimedia-hero" >
			<div class="text-render -light -vert-lowest">
				<div class="text-xxl">
					<h1 class="headline enhanced-headline"><?php echo $title ?></h1>
					<div class="description module-description"><?php echo $description ?></div>
					<div class="mck-play-icon" style="display: none"></div>
				</div>
			</div>
		</div>
	</div>
	</div>
</div>
