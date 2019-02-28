<?php
/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <div class="row count">
    <div class="col-12">
      <div class="sort-title1">
        <?php
        $block = module_invoke('views', 'block_view', '-exp-case_studies-page');
        print render($block['content']);
        ?>
      </div>
    </div>
    <div class="col-7">
      <div class="result-count">
        <span><?php print $view->total_rows; ?></span> Case Studies
      </div>
    </div>
    <div class="col-5">
      <div class="sort-title float-right">
        <?php
        $block = module_invoke('views', 'block_view', '-exp-case_studies-page');
        print render($block['content']);
        ?>
      </div>

    </div>
    <div class="offset-lg-4 col-lg-8">
      <div class="info-box">
        <div class="row">
          <div class="col-md-4 col-sm-6">
            <a href="https://home.intranet.mckinsey.com/practicespaces/ps/marketing-sales/Pricing-Compass.html" target="_blank"><div class="testimonial item"><div class="valign-wrapper"><div><img src="./sites/all/themes/mck_know/images/pricing-1.png"/></div><div>Pricing Compass</div></div>
              </div></a>
          </div>
          <div class="col-md-4 col-sm-6">
            <a href="https://home.intranet.mckinsey.com/practicespaces/ps/marketing-sales/Sales-Channel-Compass.html" target="_blank"> <div class="growth item"><div class="valign-wrapper"><div><img src="./sites/all/themes/mck_know/images/sales-1.png"/></div><div>Sales Compass</div></div></div></a>
          </div>
          <div class="col-md-4 col-sm-6">
            <div class="testimonial item"><div class="valign-wrapper"><div><img src="./sites/all/themes/mck_know/images/testimonial-icon.png" style="margin-top:5px"/></div><div>Testimonial Avaliable</div></div>
            </div>
          </div>

        </div>
      </div>
    </div>
  </div>
  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content row">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
