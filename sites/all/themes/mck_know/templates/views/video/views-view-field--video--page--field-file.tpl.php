<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

$nid = isset($row->nid) ? $row->nid : NULL;
$image = isset($row->field_field_video_still[0]['raw']['uri']) ? $row->field_field_video_still[0]['raw']['uri'] : NULL;
$imageurl = file_create_url($image); 
// $videothumb = file_create_url($videothumbnail); 
$video = isset($row->field_field_file[0]['raw']['uri']) ? $row->field_field_file[0]['raw']['uri'] : NULL;
$videourl = file_create_url($video); 




?>
<div class="video-link">
  <a  href="#popup-<?php print $nid;?>"  class="open-popup-link">
      <div class="video-thumbnail" style="background-image:url(<?php print $imageurl;?>)"></div>
  </a>
</div>
<div id="popup-<?php print $nid;?>" class="white-popup mfp-hide video-popup">
    <video id="example_video_1"  class="video-js vjs-default-skin vjs-big-play-centered vjs-16-9" controls="false" preload="auto" poster="<?php print $imageurl;?>" data-setup="{}">     
            <source src="<?php print $videourl;?>" type='video/mp4'>
    </video>
</div>

