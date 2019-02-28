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
$paraID   = $variables['elements']['#entity']->item_id;
 
$videouri      = isset($content['field_file']['#items'][0]['uri']) ? $content['field_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;
$bguri         = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;


$eyebrow         = isset($content['field_sub_title']) ? render($content['field_sub_title']) : '';
$title         = isset($content['field_title']) ? render($content['field_title']) : '';
$description   = isset($content['field_description']) ? render($content['field_description']) : '';
$bg_video      = $content['field_background_video']['0']['#markup'] ? "background-video-wrapper" : 'media-player banner banner-video active';

if(isset( $content['field_grey_row'])){
   $textAlign     = $content['field_grey_row'][0]['#markup']? "-text-center" : "-text-left";
}

$image_links         = isset($content['field_link']) ? $content['field_link'] : '';

$contentColor = isset($content['field_content_font_color'])? $content['field_content_font_color'][0]['#markup']: "";
$mainHeadingColor = isset($content['field_main_heading_font_color'])? $content['field_main_heading_font_color'][0]['#markup']: "";

?>


<style type="text/css">
    <?php if(isset($contentColor) && !empty($contentColor)) { ?>
                  .para-<?php echo $paraID ?>.banner-video-popup .body-copy,
                  .para-<?php echo $paraID ?>.banner-video-popup .btn,
                  .para-<?php echo $paraID ?>.banner-video-popup .video-play-btn:before
                   {
                    color: <?php echo $contentColor; ?> !important;
                  }

                  .para-<?php echo $paraID ?>.banner-video-popup .btn{
                    border: solid 1px <?php echo $contentColor; ?>;
                  }

                .para-<?php echo $paraID ?>.banner-video-popup .video-play-btn {
                    border-color: <?php echo $contentColor; ?>;
                }


    <?php } ?>

   <?php if(isset($mainHeadingColor) && !empty($mainHeadingColor)) { ?>
                  .para-<?php echo $paraID ?>.banner-video-popup h2
                   {
                    color: <?php echo $mainHeadingColor; ?> !important;
                  }
    <?php } ?>
</style>


<div class="banner-video-popup theme-hfc para-<?php echo $paraID ?> ">
    <div class="video-bg" style="background-image: url('<?php echo $bgurl ?>');">
        <div class="video-info <?php echo $textAlign;?>">
            <span class="eyebrow body-copy"><?php echo $eyebrow; ?></span>
            <div class="text-l">
                <h2 class="headline enhanced-headline"><?php echo $title; ?></h2>
                <div class="description body-copy"><?php echo $description; ?></div>
                <div class="button-container">
                    <a class="mck-play-icon video-play-btn  mfp-iframe" href="<?php echo $videourl ?>"></a>
                </div>
                <div class="banner-links">
                <?php foreach($image_links as $key => $item) {
                    if(is_numeric($key)) {
                        $paraItem = $item['#element']; ?>
                        <a href="<?php echo $paraItem['url']; ?>" class="btn"><?php echo $paraItem['title']; ?></a>
                    <?php } 
                } ?>
            </div>
            </div>
        </div>
    </div>
</div>
