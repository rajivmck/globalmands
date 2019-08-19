<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<?php $node = node_load(274); ?>
<div class="page-class case-wrapper <?php echo $node->field_theme['und'][0]['value']; ?>">
<a name="top"></a>
 <header class="global-header global-header-r3 navigation-r3 custom-menu" role="banner">
    <a aria-hidden="false" aria-label="Toggle Menu" class="skip-main" href="#0" tabindex="0">Skip to main content</a>
    <?php echo theme('slide_menu') ?>

    <section class="top-bar">
        <div class="top-bar-inner">

            <div class="top-bar-container">
                <a href="<?php print $front_page;?>" style="margin-left: 0px;" class="names section-name-desktop -show"><?php print $site_name;?></a>
            
              <?php print theme('custom_main_menu'); ?>
            </div>
            <div class="search-nav" data-module="SearchNav,SearchSuggestions">
                <div class="click-search"></div>
                <span class="search-nav-input-icon r2-search"></span>  
                <form class="form-inline" id="search">  <input class="form-control" type="search" placeholder="Type to search..." aria-label="Search"> </form>
             
                <!-- <input aria-live="polite" class="search-nav-input" placeholder="Type to search..." title="Search" type="search" value="">  --><button class="search-nav-submit" name="search" title="Search" type="button">Search</button> <button class="search-nav-button-close desktop r2-close" type="button"><span class="visually-hidden">Toggle search field</span></button>
                <ul class="search-nav-suggestions span-full-width"></ul>
            </div>
        </div>
    </section>
    <div class="logo-container">
    <?php if (isset($node->field_full_image)) { ?>
            <a class="names cpny-logo alone" href="<?php print $front_page;?>" style="background-image: url('<?php echo $bgurl ?>');" ><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
              <a href="<?php print $front_page;?>" style="margin-left: 0px;" class="names section-name half"><?php print $site_name;?></a>
          <?php }
          else { ?>
            <a class="names mck-logo-icon alone" href="<?php print $front_page;?>"  ><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
             <a href="<?php print $front_page;?>" style="margin-left: 0px;" class="names section-name half"><?php print $site_name;?></a>
            
      <?php } ?>
  </div><!--END NAVIGATION MENU-->
    <div class="nav-right">

        <button class="search-nav-button r2-search" type="button"><span class="visually-hidden">Toggle search field</span></button> <button class="search-nav-button-close mobile r2-close" type="button"><span class="visually-hidden">Toggle search field</span></button>
    </div><!-- END NAVIGATION WHITE BAR -->

     <?php
        // $block = module_invoke('views','block_view', '-exp-systems-page_6');
        // $search_block = $block;
        // print render($block);
        //  $block = module_invoke('search', 'block_view', 'search');
         // print render($block); 

    ?>

</header>


<?php if (!empty($node->field_hero_images)): ?>

    <?php //$key = key($node->field_hero_images) ?>
    <?php //$paragraph = reset($node->field_hero_images[$key]['entity']['paragraphs_item']) ?>
    <?php

      $p = $node->field_hero_images[LANGUAGE_NONE][0]['value'];
      $paragraphEntity = entity_load("paragraphs_item",array($p));
      $paragraph = field_attach_view("paragraphs_item", $paragraphEntity[$p], "full", $langcode = $GLOBALS['language']->language, $options = array());

       
      $url = isset($paragraph['field_image'][0]['#item']['uri']) ? file_create_url($paragraph['field_image'][0]['#item']['uri']) : '';

      $linktitle = isset($paragraph['field_link']['#items'][0]['title']) ? $paragraph['field_link']['#items'][0]['title'] : '';
      $linkurl = isset($paragraph['field_link'][0]['#element']['url']) ? file_create_url($paragraph['field_link'][0]['#element']['url']) : '';

      $contentColor = isset($paragraph['field_content_font_color']) ? $paragraph['field_content_font_color'][0]['#markup'] : "";
      $mainHeadingColor = isset($paragraph['field_main_heading_font_color']) ? $paragraph['field_main_heading_font_color'][0]['#markup'] : "";
      $headline = isset($paragraph['field_hero_headline']) ? $paragraph['field_hero_headline'][0]['#markup'] : "";
    ?>

    <div class="hero-featured  hero-main_0_hero_0 theme-hfc" data-module="ParallaxFactory">
      <div class="parallax-container selection-banner" style="transform: translate3d(0px, 0px, 0px); background-image: url(<?php echo $url ?>)">
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
          <h1><?php print $headline;?></h1>
          <a href="<?php print $linkurl;?>" class="video-popup"><?php print $linktitle;?><span class="mck-icon__arrow-right"></span></a>
      </div>

    </div>
<?php endif ?>
<div class="blue-bk gearbox">
  <div class="section-inner-wrapper">
    <div class="valign-wrapper">
        <div>
            <img src="./sites/all/themes/mck_know/images/growth-icon.png"/>
        </div>
        <div>
                <h5>Growth Gearbox</h5>
                <p>Want to work with the Growth Gearbox to create winning M&amp;S Growth LOPs? <a href="mailto:Growth_Gearbox@mckinsey.com">Learn more.</a></p>
        </div>
    </div>
  </div>
</div>
  <div class="top-content-wrapper">
    <div class="section-inner-wrapper">
      <div class="row">
      
      </div>
    </div>
  </div>
  <div class="section-wrapper case">
    <div class="top-filters-wrapper">
      <div class="section-inner-wrapper">
        <?php
          $block = module_invoke('views', 'block_view', '-exp-video-page');
          print render($block['content']);
        ?>
      </div>
    </div>
    <section class="full-text-section case-box section-inner-wrapper">
      <div class="page-wrapper">
        <div class="row">
          <div class="col-lg-9 col-md-8 col-sm-12 content left-sidebar">
            <?php echo render($page['content']) ?>  
          </div>
          <?php if ($page['left_sidebar']): ?>
            <div class="col-lg-3 col-md-4 col-sm-12 right-sidebar">
              <div class="filters-outer">
                <div class="filters-header">Filter by</div>
                <?php print render($page['left_sidebar']); ?>
              </div>
            </div>
          <?php endif; ?>
        </div>
       
      </div>
    </section>
  </div>
</div>
<section class="white-bk">
<div class="section-inner-wrapper">
  <div>
     <?php
              $blockObject = block_load('views', 'resources-block_1');
              $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
              $output = drupal_render($block);
              print $output;
            ?>


  </div>
</div>
</section>


<footer id="global_footer_0_MainFooter" class="global-footer" lang="en">

    <section class="footer-main">
<h2 style="padding-bottom: 15px;
    margin-top: -50px;">Contact Us</h2>
        <div class="footer-top">
          
          <p>
            If you have any inquiries about the site then please reach out to the <a href="mailto:Global_Marketing_and_Sales_Casebook@mckinsey.com">Global M&S Casebook Team</a>.
          </p>
            <div class="mck-logo-icon">
                <span class="visually-hidden">McKinsey&amp;Company</span>
            </div>

            
            


        </div>
       

    </section>

    <section class="footer">

        <div class="footer-inner">

            <div id="global_footer_0_AppLinksBlock" class="app-links">
                  <?php print theme('custom_main_menu'); ?>

            </div>
            
            <div class="copyright">© 1996-2019 McKinsey&nbsp;&amp;&nbsp;Company</div>

        </div>

    </section>
</footer>