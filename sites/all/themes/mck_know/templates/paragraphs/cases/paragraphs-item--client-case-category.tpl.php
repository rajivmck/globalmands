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
   //ddl($content);
   
   /*$node = node_load($nid);
   $wrapper = entity_metadata_wrapper('node', $node);
   $value = $wrapper->body->value();*/
   
   
   $bguri              = isset($content['field_acc_card_image']['#items'][0]['uri']) ? $content['field_acc_card_image']['#items'][0]['uri'] : NULL;
   $bgurl           = isset($bguri) ? file_create_url($bguri) : NULL;
   
   //$node_content = node_load($nid);
   
   if($content['field_acc_icon'][0]["#markup"] == 1){
   	$imageClass= "icon";
   }else{
   	$imageClass="thumbnail";
   }
   
   
   $cc_cat              = isset($content['field_cc_cat']) ? render($content['field_cc_cat']) : '';
   $cases              = isset($content['field_case']) ? ($content['field_case']['#items']) : '';
   
   ?>


<tr>
   <td class="main-header">
      <h6> <?php echo $cc_cat; ?> </h6>
   </td>
   <?php
	$b2bcontent = '';
	$b2ccontent = '';
	$content = '';
	  
	foreach($cases as $key => $item) {
		
		if(is_numeric($key)) {
		$paraItem = $item;
		$nid = $paraItem['target_id'];
		$secondViewName = 'client_case';
		$node = node_load($nid);
		$wrapper = entity_metadata_wrapper('node', $node);
		$value = $wrapper->field_b2b_b2c->value();
		//echo $value;
		
		
		if(trim($value) == "B2B"){	
			$b2bcontenttemp = views_embed_view($secondViewName,'block', $nid);
			$b2bcontent = $b2bcontent.$b2bcontenttemp;
		
		}else  if(trim($value) == "B2C"){
			$b2ccontenttemp = views_embed_view($secondViewName,'block', $nid);
			$b2ccontent = $b2ccontent.$b2ccontenttemp;
		}else{
			$contenttemp = views_embed_view($secondViewName,'block', $nid);
			$content = $content.$contenttemp;
		}
		
		 }
      } 
?>
			<td class="table-cell ">
          <div class="row">
			       <?php print $b2bcontent;	?>
          </div>
			</td>
			<td class="table-cell ">	 
          <div class="row">
			       <?php print $b2ccontent;?>
          </div>
			</td>
	

</tr>