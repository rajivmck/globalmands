<div class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($top): ?>
      <div class="row top-row">
          <div class="col-md-12 <?php print $top_classes; ?>">
            <?php print $top; ?>
          </div>
      </div>
  <?php endif; ?>

    <div class="row">
      <?php if ($col_left): ?>
          <div class="col-md-4 col-left-two-col <?php $col_left_classes; ?>">
            <?php print $col_left; ?>
          </div>
      <?php endif; ?>

      <?php if ($col_right): ?>
          <div class="col-md-8 col-right-two-col <?php print $col_right_classes; ?>">
            <?php print $col_right; ?>
          </div>
      <?php endif; ?>
    </div>


  <?php if ($bottom): ?>
      <div class="row">
          <div class="col-md-12 dl-bottom <?php print $bottom_classes; ?>">
            <?php print $bottom; ?>
          </div>
      </div>
  <?php endif; ?>
</div>