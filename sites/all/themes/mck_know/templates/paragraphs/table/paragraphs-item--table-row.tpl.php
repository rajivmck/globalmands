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
// kpr($content);
$title              = isset($content['field_first_cell']) ? render($content['field_first_cell']) : '';
$secondCell  = isset($content['field_second_cell']) ? $content['field_second_cell'] : '';
$thirdCell  = isset($content['field_third_cell']) ? $content['field_third_cell'] : '';



?>

<tr>
	<td class="table-category"><h6><?php echo render($title) ?> </h6></td>
	<td class="table-cell">		
		<?php 
		        foreach($secondCell as $key => $value) {
		            if(is_numeric($key)) {

		            	$fci = $value['entity']['field_collection_item'];

				    	$linksFCIKey = key($fci);
			    		$blackLogo = !empty($fci[$linksFCIKey]['field_image'][0]['#item']['uri']) ? render($fci[$linksFCIKey]['field_image'][0]['#item']['uri']) : NULL;
			    		$blackLogoURL = file_create_url($blackLogo);

			    		$colorLogo = !empty($fci[$linksFCIKey]['field_poster'][0]['#item']['uri']) ? render($fci[$linksFCIKey]['field_poster'][0]['#item']['uri']) : NULL;
			    		$colorLogoURL = file_create_url($colorLogo);

			    		$description = !empty($fci[$linksFCIKey]['field_short_description'][0]['#markup']) ? render($fci[$linksFCIKey]['field_short_description'][0]['#markup']):'';
			    		$title = !empty($fci[$linksFCIKey]['field_title'][0]['#markup']) ? render($fci[$linksFCIKey]['field_title'][0]['#markup']):'';


				        $linkURL = !empty($fci[$linksFCIKey]['field_column_link'][0]['#element']['url']) ? $fci[$linksFCIKey]['field_column_link'][0]['#element']['url'] : NULL;
				        $linksAttr = !empty($fci[$linksFCIKey]['field_column_link'][0]['#element']['attributes']['target']) ? $fci[$linksFCIKey]['field_column_link'][0]['#element']['attributes']['target'] : NULL;

				        if (strlen($description) > 200){
				        	$str = substr($description, 0, 200) . '...';
				        }
				        else{
				        	$str = $description;
				        }
   
		        ?>
		        	<div class="img__wrap">
		        		<div class="logo">
			                <img class="black-logo img__img" src="<?php print $blackLogoURL;?>"/>
			                <?php if($linkURL):?>
			                	<a href="<?php print $linkURL;?>" target="<?php print $linksAttr;?>">
					                <div class="info img__description">
						                <img class="colorlogo" src="<?php print $colorLogoURL;?>"/>
						                <h4><?php print $title;?></h4>
						                <p><?php print $str;?></p>
						             </div>
					            </a>
					       <?php else:?>
					       	   <div class="info img__description">
						                <img class="colorlogo" src="<?php print $colorLogoURL;?>"/>
						                <h4><?php print $title;?></h4>
						                <p><?php print $str;?></p>
						             </div>
				         <?php endif;?>
				         </div>
			        </div>
		                <?php
		            }
		        }
		    ?>
	</td>
	<td class="table-cell">
		<?php 
		        foreach($thirdCell as $key => $value) {
		            if(is_numeric($key)) {

		            	$fci = $value['entity']['field_collection_item'];

				    	$linksFCIKey = key($fci);
			    		$blackLogo = !empty($fci[$linksFCIKey]['field_image'][0]['#item']['uri']) ? render($fci[$linksFCIKey]['field_image'][0]['#item']['uri']) : NULL;
			    		$blackLogoURL = file_create_url($blackLogo);

			    		$colorLogo = !empty($fci[$linksFCIKey]['field_poster'][0]['#item']['uri']) ? render($fci[$linksFCIKey]['field_poster'][0]['#item']['uri']) : NULL;
			    		$colorLogoURL = file_create_url($colorLogo);

			    		$description = !empty($fci[$linksFCIKey]['field_short_description'][0]['#markup']) ? render($fci[$linksFCIKey]['field_short_description'][0]['#markup']):'';
			    		$title = !empty($fci[$linksFCIKey]['field_title'][0]['#markup']) ? render($fci[$linksFCIKey]['field_title'][0]['#markup']):'';


				        $linkURL = !empty($fci[$linksFCIKey]['field_column_link'][0]['#element']['url']) ? $fci[$linksFCIKey]['field_column_link'][0]['#element']['url'] : NULL;
				        $linksAttr = !empty($fci[$linksFCIKey]['field_column_link'][0]['#element']['attributes']['target']) ? $fci[$linksFCIKey]['field_column_link'][0]['#element']['attributes']['target'] : NULL;

			          	 if (strlen($description) > 200){
				        	$str = substr($description, 0, 200) . '...';
				        }
				        else{
				        	$str = $description;
				        }
		        ?>
		        	<div class="img__wrap">
		        		<div class="logo">
			                <img class="black-logo img__img" src="<?php print $blackLogoURL;?>"/>
			                <?php if($linkURL):?>
			                	<a href="<?php print $linkURL;?>" target="<?php print $linksAttr;?>">
					                <div class="info img__description">
						                <img class="colorlogo" src="<?php print $colorLogoURL;?>"/>
						                <h4><?php print $title;?></h4>
						                <p><?php print $str;?></p>
						             </div>
					            </a>
					       <?php else:?>
					       	   <div class="info img__description">
						                <img class="colorlogo" src="<?php print $colorLogoURL;?>"/>
						                <h4><?php print $title;?></h4>
						                <p><?php print $str;?></p>
						             </div>
				         <?php endif;?>
				         </div>
			        </div>
		                <?php
		            }
		        }
		    ?>
	</td>
</tr>

