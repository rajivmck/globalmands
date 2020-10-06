<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */

$imageValue = isset($content['field_hero_images']['#items'][0]['value']) ? $content['field_hero_images']['#items'][0]['value']: NULL;
$heroTitle = isset($content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_hero_headline'][0]['#markup']) ? $content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_hero_headline'][0]['#markup']: '';
$heroDesc =isset($content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_hero_description'][0]['#markup']) ? $content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_hero_description'][0]['#markup']: NULL;
$linkTitle = isset($content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_link'][0]['#element']['title']) ? $content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_link'][0]['#element']['title']: NULL;
$Link = isset($content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_link'][0]['#element']['display_url']) ? $content['field_hero_images'][0]['entity']['paragraphs_item'][$imageValue]['field_link'][0]['#element']['display_url']: NULL;


?>
<div class="case-wrapper">
<div class="hero-featured  hero-main_0_hero_0 theme-hfc" data-module="ParallaxFactory">
      <div class="parallax-container selection-banner" style="transform: translate3d(0px, 0px, 0px);">
            <div class="mark">
              <svg id="upRightCenter" viewBox="0 0 3200 1800" preserveAspectRatio="xMidYMid slice">
                  <path id="upRightCenter1" stroke="#1941e1" d="M1314.010876 2620.388707l510.41293-3120.77741"></path>
                  <path id="upRightCenter2" stroke="#1a43e1" d="M1371.191044 2605.081777l377.05259-3104.163552"></path>
                  <path id="upRightCenter3" stroke="#1b46e1" d="M1428.572378 2589.915699l244.289926-3088.831401"></path>
                  <path id="upRightCenter4" stroke="#1c48e1" d="M1483.782698 2574.77978L1595.65198-497.779782"></path>
                  <path id="upRightCenter5" stroke="#1d4be1" d="M1541.164032 2558.613704L1520.27065-498.613708"></path>
                  <path id="upRightCenter6" stroke="#1e4de1" d="M1598.3442 2543.306774L1444.09048-497.306778"></path>
                  <path id="upRightCenter7" stroke="#1f50e0" d="M1654.52437 2527.999843L1366.910312-495.999849"></path>
                  <path id="upRightCenter8" stroke="#1f52e0" d="M1710.9057 2512.833777l-420.376725-3008.66755"></path>
                  <path id="upRightCenter9" stroke="#2055e0" d="M1768.116025 2497.697856l-552.79737-2992.39571"></path>
                  <path id="upRightCenter10" stroke="#2157e0" d="M1824.497352 2482.53178L1138.937318-494.531778"></path>
                  <path id="upRightCenter11" stroke="#225ae0" d="M1881.67752 2467.22485L1062.757147-493.224848"></path>
                  <path id="upRightCenter12" stroke="#235ce0" d="M1937.887847 2452.088928L986.54683-492.08893"></path>
                  <path id="upRightCenter13" stroke="#245fe0" d="M1995.239024 2435.751843L910.19565-492.751846"></path>
                  <path id="upRightCenter14" stroke="#2561e0" d="M2051.449342 2420.615925L833.985323-491.615924"></path>
                  <path id="upRightCenter15" stroke="#2664e0" d="M2107.65967 2404.480005L757.775005-491.480005"></path>
                  <path id="upRightCenter16" stroke="#2766e0" d="M2165.010849 2390.142925L681.423826-490.142921"></path>
                  <path id="upRightCenter17" stroke="#2869df" d="M2221.19102 2374.835994L604.243657-488.835992"></path>
                  <path id="upRightCenter18" stroke="#296bdf" d="M2278.401345 2358.700076L529.033338-488.700073"></path>
                  <path id="upRightCenter19" stroke="#2a6edf" d="M2335.782668 2344.533998L453.651998-487.533997"></path>
                  <path id="upRightCenter20" stroke="#2b70df" d="M2391.164007 2328.36792L376.270673-488.367924"></path>
                  <path id="upRightCenter21" stroke="#2c73df" d="M2448.344175 2313.06099L300.090503-487.060994"></path>
                  <path id="upRightCenter22" stroke="#2c75df" d="M2505.524343 2297.75406L223.910333-485.754064"></path>
                  <path id="upRightCenter23" stroke="#2d78df" d="M2561.905673 2282.587994L147.528996-485.587989"></path>
                  <path id="upRightCenter24" stroke="#2e7adf" d="M2618.116 2267.452073L71.31868-484.452071"></path>
                  <path id="upRightCenter25" stroke="#2f7ddf" d="M2675.326326 2251.316154L-3.891642-484.316152"></path>
                  <path id="upRightCenter26" stroke="#307fdf" d="M2731.677494 2236.979067L-81.242828-482.979066"></path>
                  <path id="upRightCenter27" stroke="#3182de" d="M2788.857672 2221.672133L-157.422988-481.672138"></path>
                  <path id="upRightCenter28" stroke="#3284de" d="M2846.067988 2205.536218L-232.633315-481.536216"></path>
                  <path id="upRightCenter29" stroke="#3387de" d="M2902.449324 2190.370139L-309.014648-481.370143"></path>
                  <path id="upRightCenter30" stroke="#3489de" d="M2958.659642 2175.23422L-385.22497-480.234223"></path>
                  <path id="upRightCenter31" stroke="#358cde" d="M3016.010821 2159.897143L-461.576149-479.89714"></path>
                  <path id="upRightCenter32" stroke="#368ede" d="M3072.221149 2144.76122L-537.786471-478.76122"></path>
                  <path id="upRightCenter33" stroke="#3791de" d="M3128.40132 2128.454293L-614.966641-478.45429"></path>
                  <path id="upRightCenter34" stroke="#3893de" d="M3185.782643 2114.288215L-690.347973-477.288215"></path>
                  <path id="upRightCenter35" stroke="#3996de" d="M3242.992968 2099.152294L-765.558296-476.152296"></path>
                  <path id="upRightCenter36" stroke="#3998de" d="M3299.173139 2082.845366L-842.738464-475.845365"></path>
                  <path id="upRightCenter37" stroke="#3a9bdd" d="M3355.554475 2067.679286L-919.119798-475.67929"></path>
                  <path id="upRightCenter38" stroke="#3b9ddd" d="M3412.734643 2051.372359L-995.299966-475.372361"></path>
                  <path id="upRightCenter39" stroke="#3ca0dd" d="M3470.085822 2037.035279L-1071.651145-474.035278"></path>
                  <path id="upRightCenter40" stroke="#3da2dd" d="M3525.3263 2022.070368L-1147.891621-473.070368"></path>
              </svg>    </div>

      </div>

      <div class="section-inner-wrapper">
          <h1><?php print $heroTitle;?></h1>
          <a href="<?php print $Link;?>"><?php print $linkTitle;?><span class="mck-icon__arrow-right"></span></a>
      </div>

    </div>
 </div>
<div class="blue-bk gearbox">
  <div class="section-inner-wrapper">
    <div class="valign-wrapper">
        <div>
            <img src="./sites/all/themes/mck_know/images/growth-icon.png">
        </div>
        <div>
                <h5>Growth Gearbox</h5>
                <p>Want to work with the Growth Gearbox to create winning M&amp;S Growth LOPs? <a href="mailto:Growth_Gearbox@mckinsey.com">Learn more.</a></p>
        </div>
    </div>
  </div>
</div>
<div>
  <?php
  //hide all the fields we are manually printing out in this tpl
  hide ($content['field_hero_images']);
  print render($content);
  print render($footer);
  ?>  
</div>

