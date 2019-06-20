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


$image = isset($fields['field_image']->content) ? $fields['field_image']->content : NULL;
// $nid = isset($fields['nid']) ? $fields['nid']->raw : NULL;
// $path = 'node/' . (int) $nid;
// $alias = drupal_get_path_alias($path); 
$title = isset($fields['title']->content) ? $fields['title']->content : NULL;
$subtitle = isset($fields['field_subtitle']->content) ? $fields['field_subtitle']->content: NULL;
$body = isset($fields['body']->content) ? $fields['body']->content : NULL;
// $encodetitle = rawurlencode($title);

$file = isset($fields['field_file']->content) ? $fields['field_file']->content : NULL;
$link = isset($fields['field_link']->content) ? $fields['field_link']->content : NULL;
// $emaillink = isset($fields['field_link_1']->content) ? $fields['field_link_1']->content : NULL;
// $encodeurl = urlencode($emaillink);
// $duration = isset($fields['field_duration']->content) ? $fields['field_duration']->content : NULL;

// $cat = isset($fields['field_tags']->content) ? $fields['field_tags']->content : NULL;
// $stars = isset($fields['field_rating']->content) ? $fields['field_rating']->content : NULL; 
// $term = taxonomy_get_term_by_name($cat);
// $tid = key($term);
// $toolkiturl = isset($fields['field_url']->content) ? $fields['field_url']->content : NULL;
// $toolkiturlencode = urlencode($toolkiturl);
// $rate =isset($fields['value']->content) ? $fields['value']->content : NULL;
// $contenttype =isset($fields['type']->content) ? $fields['type']->content : NULL;
// $section = isset($fields['field_section']->content) ? trim($fields['field_section']->content) : NULL;


?>


    <div class="card-container">
     <div class="star-container">
        <a href="<?php print $link;?>" class="link"> 
          <div class="newsletter-image" style="background-image:url(<?php print $image;?>)">  </div>
        </a>
      
    </div>
  <div class="card">

         

      <?php if(isset($subtitle) && !empty($subtitle)): ?> 
         <h6><?php print $subtitle; ?></h6>
      <?php endif; ?> 
     

            <?php if ($file): ?>                 
                  
                <h3><a href="<?php print $file; ?>"><?php print $title; ?></a></h3>

          <?php elseif ($link): ?>                
                <h3><a href="<?php print $link; ?>"><?php print $title; ?></a></h3>                 
           <?php else: ?> 
               <h3><?php print $title; ?></h3>
          <?php endif; ?>  
      <p> <?php print $body; ?> <br>
         

          <?php if ($file): ?> 
                    <a href="<?php print $file;?>" class="views-more-link cta -arrow">  Read More </a>
          <?php elseif ($link): ?> 
                <a href="<?php print $link;?>" class="views-more-link cta -arrow">  Read More </a>
           <?php else: ?> 
          
          <?php endif; ?>  

      </p>
     



                  </div>


     </div>
