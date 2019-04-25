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




var $link6 = '';

if(isset($content['field_link_6'])){
  if(strpos( $content['field_link_6']['#items'][0]['url'], "#" )){
   $link6 = l($content['field_link_1']['#items'][0]['title'], '', ['fragment' => str_replace("#","",$content['field_link_1']['#items'][0]['url']), 'external' => TRUE]);
  }else{
    $link6 = $content['field_link_6'];
  }

}


?>



	<div class="top-bar-inner">
	  <div class="global-primary-nav-r3 show-nav" data-module="PrimaryNavigation" role="banner">
		  <nav class="primary-navigation" role="navigation">
        <ul class="nav-list nav-group-left">
       <li role="menuitem" class="nav-item nav-link-item" aria-hidden="true" tabindex="5"><?php echo $link6; ?></li> 
        </ul>
		  </nav>
	</div>

	</div>
  <div class="logo-container">
    <a class="names mck-logo-icon alone" href="<?php echo url('<front>') ?>"><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
  </div><!--END NAVIGATION MENU-->
</header>






