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


$title = isset($content['field_field_title']['#items'][0]['value']) ? $content['field_field_title']['#items'][0]['value']: NULL;
$mainHeader = isset($content['field_main_header']['#items']) ? $content['field_main_header']['#items']: NULL;
$tableeHeader = isset($content['field_table_header']['#items']) ? $content['field_table_header']['#items']: NULL;
// $anchor = isset($content['field_heading'][0]['#markup']) ? $content['field_heading'][0]['#markup']: NULL;
// $anchor = preg_replace('/\s+/', '', $title);


?>

<section class="custom-table">
	<div class="wrapper">
		<div class="row">
			<header class="text-s">
			<?php if($content['field_field_title']):?>			
					<h4 class="headline"> <?php print render($content['field_field_title']); ?></h4>
			<?php endif;?>
			<?php if($content['field_description']):?>				
					<div class="description"> <?php print render($content['field_description']); ?></div>
			<?php endif;?>

			</header>
			<div class="col-12" style="padding:0">	
			
				<table>

					
				    <?php if(isset($content['field_main_header']['#items'])){ ?>
						<tr class="main-header">
							<?php					
											
								foreach($mainHeader as $mainHeaders) {						 		
								$mainHeaderTitle = isset($mainHeaders['value']) ? $mainHeaders['value']: '';

								$mainHeaderLists .=  '<th><h6>' . $mainHeaderTitle . '</h4></h6>';				
								}

							?>
										 
							   <?php echo $mainHeaderLists; ?> 
						</tr>
					<?php } ?> 
					
			 		  <?php print render($content['field_table_row']); ?>
			 	</table> 
			</div>
		</div>
	</div>
</section>



