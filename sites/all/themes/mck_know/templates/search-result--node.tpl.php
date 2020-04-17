<?php

/**
 * @file
 * Default theme implementation for displaying a single search result.
 *
 * This template renders a single search result and is collected into
 * search-results.tpl.php. This and the parent template are
 * dependent to one another sharing the markup for definition lists.
 *
 * Available variables:
 * - $url: URL of the result.
 * - $title: Title of the result.
 * - $snippet: A small preview of the result. Does not apply to user searches.
 * - $info: String of all the meta information ready for print. Does not apply
 *   to user searches.
 * - $info_split: Contains same data as $info, split into a keyed array.
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Default keys within $info_split:
 * - $info_split['module']: The module that implemented the search query.
 * - $info_split['user']: Author of the node linked to users profile. Depends
 *   on permission.
 * - $info_split['date']: Last update of the node. Short formatted.
 * - $info_split['comment']: Number of comments output as "% comments", %
 *   being the count. Depends on comment.module.
 *
 * Other variables:
 * - $classes_array: Array of HTML class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $title_attributes_array: Array of HTML attributes for the title. It is
 *   flattened into a string within the variable $title_attributes.
 * - $content_attributes_array: Array of HTML attributes for the content. It is
 *   flattened into a string within the variable $content_attributes.
 *
 * Since $info_split is keyed, a direct print of the item is possible.
 * This array does not apply to user searches so it is recommended to check
 * for its existence before printing. The default keys of 'type', 'user' and
 * 'date' always exist for node searches. Modules may provide other data.
 * @code
 *   <?php if (isset($info_split['comment'])): ?>
 *     <span class="info-comment">
 *       <?php print $info_split['comment']; ?>
 *     </span>
 *   <?php endif; ?>
 * @endcode
 *
 * To check for all available data within $info_split, use the code below.
 * @code
 *   <?php print '<pre>'. check_plain(print_r($info_split, 1)) .'</pre>'; ?>
 * @endcode
 *
 * @see template_preprocess()
 * @see template_preprocess_search_result()
 * @see template_process()
 *
 * @ingroup themeable
 */


// kpr($result);
$NID = isset($result['node']->nid) ? $result['node']->nid:NULL;
$serviceLine = isset($result['node']->field_service_line) ? $result['node']->field_service_line['und'] : NULL;

$growth = isset($result['node']->field_growth_related['und'][0]['value']) ? $result['node']->field_growth_related['und'][0]['value']:NULL;
$compass = isset($result['node']->field_compass['und'][0]['tid']) ? $result['node']->field_compass['und'][0]['tid']:NULL;
$compassTerm = taxonomy_term_load($compass);
$compassName = $compassTerm->name;
$download = isset($result['node']->field_download['und'][0]['uri']) ? $result['node']->field_download['und'][0]['uri']:'';
$downloadURL = file_create_url($download);
$link =isset($result['link']) ? $result['link']: NULL;
$type =isset($result['node']->field_type['und'][0]['tid']) ? $result['node']->field_type['und'][0]['tid']: NULL;
$typeTerm = taxonomy_term_load($type);
$typeName = $typeTerm->name;
$typeTID = $typeTerm->tid;
$fileupload =isset($result['node']->field_file_upload['und'][0]['uri']) ? $result['node']->field_file_upload['und'][0]['uri']: NULL;

// $fileupload = isset(['result']['node']->field_file_upload['und'][0]['uri']) ? ['result']['node']->field_file_upload['und'][0]['uri']: NULL;
 $fileuploadURL = file_create_url($fileupload);
?>
<li class="col-lg-4 col-md-6 col-sm-12">
  <div class="">
   
    <div class="white-box">
      <div class="field-content bottom-box">
        <div class="valign-wrapper">
          <div class="file-icon"><img src="../../sites/all/themes/mck_know/images/file-icon.png"></div>
          <div class="row">
            <div class="col-12">
              <div class="bottom-tags">
               
                <?php if($serviceLine):
                    $linkList = [];
                    foreach($serviceLine as $serviceLines) {
                      $serviceLineTerm = isset($serviceLines['entity']->name) ? $serviceLines['entity']->name : '';
                      $serviceLineTID = isset($serviceLines['entity']->tid) ? $serviceLines['entity']->tid : '';
                      $linklist[] = '<a href="../../taxonomy/term/'.$serviceLineTID.'">' . $serviceLineTerm . '</a>';
                    }
                  ?>  
                  <?php echo implode(', ', $linklist); ?> 
                <?php endif;?>
              </div>
            </div>
          </div>
        </div>
      </div>
      <div class="field-content doc-title">
       

        <a href="<?php print $link;?>" class="video-popup"><?php print $title;?></a></div>
      <div class="bottom-links">
        <ul>
          <li></li>
          <li>
            <div class="growth-related"><img src="../../sites/all/themes/mck_know/images/growth-dark-bg.png"></div>
          </li>
          <?php if($compassName == "Pricing Compass"):?>
          <li>
            <div class="compass"><img src="../../sites/all/themes/mck_know/images/pricing-1.png"></div>
          </li>
          <?php elseif($compassName == "Sales Compass"):?>
            <li>
                <div class="compass"><img src="../../sites/all/themes/mck_know/images/sales-1.png"></div>
            </li>
        <?php endif;?>
        </ul>
      </div>
      <div class="field-content type-bookmark-wrapper">
        <div class="field-content type-link">
          <a href="../../taxonomy/term/<?php print $typeTID;?>" typeof="skos:Concept" property="rdfs:label skos:prefLabel" datatype=""><?php print $typeName;?></a>
        </div>
        <div class="field-content bookmark">
          <div class="gray-bk">
            <div class="valign-wrapper">
              <div><a href="<?php print $downloadURL;?>" class="mck-icon__download" title="Download"> </a></div>
               <div><div><span href="#" class="star-icon" data-nid="<?php print $NID;?>" title="Add to Favorites"></span></div></div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
</li>