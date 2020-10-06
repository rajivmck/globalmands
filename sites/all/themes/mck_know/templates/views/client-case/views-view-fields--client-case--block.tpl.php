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

$nid   = $view->result[0]->nid;
$title = isset($fields['title']->raw) ? $fields['title']->raw: NULL;
$body = isset($fields['body']->content) ? $fields['body']->content: NULL;
$category = isset($fields['field_cccategory']->content) ? $fields['field_cccategory']->content: NULL;
$poster = isset($fields['field_poster']->content) ? $fields['field_poster']->content: NULL;
$image = isset($fields['field_image']->content) ? $fields['field_image']->content: NULL;
$link = isset($row->field_field_column_link[0]['raw']['display_url']) ? $row->field_field_column_link[0]['raw']['display_url']: NULL;
$linkAttr = isset($row->field_field_column_link[0]['raw']['attributes']['target']) ? $row->field_field_column_link[0]['raw']['display_url']['attributes']['target']: NULL;
$company_type = isset($fields['field_b2b_b2c']->content) ? $fields['field_b2b_b2c']->content: NULL;

?>
<div class="col-md-6">
<!--<div class="card-wrapper flip-right <?php echo $company_type; ?>">
	<?php /*<a href="#back-<?php print $nid;?>" class="open-popup-link" target="<?php print $linkAttr;?>">*/?>
		<div class="card">
			<div class="front">
				<?php echo $poster; ?>				
			</div>
			<div class="back">
					<div class="info img__description2">
						<h4><?php echo $title; ?></h4>
						<p><?php echo $body; ?></p>
					</div>
			</div>
		</div>
	
	</div>-->

	<div class="flip-card <?php echo $company_type; ?>">
  		<div class="flip-card-inner">
    		<div class="flip-card-front">
      			<?php echo $poster; ?>
    		</div>
    		<div class="flip-card-back">
      			<div class="info img__description2">
					<h4><?php echo $title; ?></h4>
					<p><?php echo $body; ?></p>
				</div>
    		</div>
  		</div>
	</div>

</div>

<?php /*
<div id="back-<?php print $nid;?>" class="card-popup white-popup mfp-hide">
			<div class="info img__description2">
				<h4><?php echo $title; ?></h4>
				<p><?php echo $body; ?></p>
			</div>
	</div>*/?>