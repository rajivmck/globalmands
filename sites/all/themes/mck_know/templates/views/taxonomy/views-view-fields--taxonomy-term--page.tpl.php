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

$title = isset($row->node_title) ? $row->node_title : NULL;
$nid = isset($row->nid) ? $row->nid : NULL;
$serviceLines = isset($row->field_field_service_line) ? $row->field_field_service_line : NULL;
$type = isset($row->field_field_type[0]['rendered']['#title']) ? $row->field_field_type[0]['rendered']['#title'] : NULL;
$nodeURL = drupal_get_path_alias('node/'.$nid);
$root = $GLOBALS['base_url'];


?>

<div class="col-lg-4 col-md-6 col-sm-12">
	<div class="white-box">
		<div class="field-content bottom-box">
			<div class="valign-wrapper">
				<div class="file-icon"><img src="<?php print $root;?>/sites/all/themes/mck_know/images/file-icon.png"></div>
				<div class="row">
					<div class="col-lg-10 col-md-10">
						<div class="bottom-tags">

							<ul class="tag-items">
							<?php
								foreach($serviceLines as $serviceLine) {
									
									$term = taxonomy_term_load($serviceLine['tid']);
									$url = drupal_get_path_alias($serviceLine['raw']['tid']);
									$terms2 = $serviceLine['rendered']['#markup'];
									$x = 0;
								//	$terms = '';
								
									if($x == 0) {
										$terms .= '<li> <a href="'.$url.'">' . $terms2  . '</a></li> ';
									} else {
										$terms .= '<li> <a href="'.$url.'">' . $terms2  . '</a></li> ';
									}

									//$x++;
								} 
							?>
							<?php echo $terms; ?>
						</ul>
						</div>
					</div>
				</div>
			</div>
		</div>
		<div class="field-content doc-title">
			<a href="<?php print $root;?>/<?php print $nodeURL;?>" class="video-popup"><?php print $title;?>
		
			</a>
		</div>
		<div class="field-content type-bookmark-wrapper">
			<div class="field-content type-link">
					<?php echo $types; ?> 	
			</div>
			<div class="field-content bookmark">
				<div class="gray-bk">
					<div class="valign-wrapper">
						<div><a href="<?php print $root;?>/<?php print $nodeURL;?>" class="mck-icon__download video-popup"> </a></div>
						<div><span href="#" class="star-icon" data-nid="<?php print $nid;?>"></span></div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>
