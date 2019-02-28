<?php
/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($q)): ?>
  <?php
  // This ensures that, if clean URLs are off, the 'q' is added first so that
  // it shows up first in the URL.
  print $q;
  ?>
<?php endif; ?>

<div class="top-filters">
  <?php foreach ($widgets as $id => $widget): ?>
    <?php if ($id == 'filter-field_type_tid'): ?>
      <div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?>">
        <?php if (!empty($widget->label)): ?>
          <label for="<?php print $widget->id; ?>">
            <?php print $widget->label; ?>
          </label>
        <?php endif; ?>
        <?php if (!empty($widget->operator)): ?>
          <div class="views-operator">
            <?php print $widget->operator; ?>
          </div>
        <?php endif; ?>
        <div class="views-widget">
          <?php print $widget->widget; ?>
        </div>
        <?php if (!empty($widget->description)): ?>
          <div class="description">
            <?php print $widget->description; ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
  <?php endforeach; ?>
</div>

<?php if (!empty($sort_by)): ?>
  <div class="sort-by-wrapper">
    <div class="sort-label">Sort by</div>
    <div class="views-exposed-widget views-widget-sort-by">
      <div class="sort-by-value"></div>
      <?php print $sort_by; ?>
    </div>
    <div class="views-exposed-widget views-widget-sort-order">
      <?php print $sort_order; ?>
    </div>
  </div>
<?php endif; ?>

<div class="viewport">
  <!--<div class="clear-all">
    <a class="clear-filter" href="#" id="clear-all-filters"> Reset filters <i class="fa fa-undo"></i></a>
  </div>-->
  
  <div class="recommended-checkbox filter-wrapper">
    <?php print $widgets['filter-field_recommended_value']->widget; ?>
    <input type="checkbox" class="recommended-case-check" />
    <label class="option">Practice Recommended</label>
  </div>

  <!-- Show all Taxonomy parents -->
  <div class="filterby filter-row">
    <?php
      $allowed_taxonomies = array(
            "filter-field_service_line_tid" => "service_line",
            "filter-field_industries_tid"   => "case_industries",
            "filter-field_regions_tid"      => "region"
        
      );

      $vocabulary = taxonomy_get_vocabularies();
      $checklist_vocab_array = array();
      foreach ($vocabulary as $item) {
        $key = $item->vid;
        $value = $item->machine_name;
        $checklist_vocab_array[$key] = $value;
      }

      $sanitized_checklist_vocab_array = array_merge(
        array_intersect($allowed_taxonomies, $checklist_vocab_array), array_diff($checklist_vocab_array, $allowed_taxonomies)
      );

      foreach ($sanitized_checklist_vocab_array as $parent_vocab) {
        if (in_array($parent_vocab, $allowed_taxonomies)) {
          if ($vocabulary_details = taxonomy_vocabulary_machine_name_load($parent_vocab)) {
            $filter_key = array_search($parent_vocab, $allowed_taxonomies);
            print '<div class="filter-wrapper">';
            //print '<span class="title-checkbox"></span><a href="#" class="filter-item serif" rel="' . $vocabulary_details->vid . '">' . $vocabulary_details->name . '<span class="mck-icon__plus"></span></a>';
            print '<a href="#" class="filter-item serif" rel="' . $vocabulary_details->vid . '">' . $vocabulary_details->name . '<span class="mck-icon__plus"></span></a>';
            if (isset($widgets[$filter_key])) {
              print $widgets[$filter_key]->widget;
            }
            print '</div>';
          }
        }
      }
    ?>
    <div class="views-exposed-widget views-submit-button">
      <?php print $button; ?>
    </div>
  </div>
</div> 

<?php 
  if (isset($_GET['search_block_form'])) {
    $default_value = $_GET['search_block_form'];
  }
  if (isset($_GET['keyword'])) {
    $default_value = $_GET['keyword'];
  }
?>

<div id="edit-keyword-wrapper" class="views-exposed-widget views-widget-filter-keys">
   <div class="views-widget">
      <div class="form-item form-type-textfield form-item-keyword">
          <input placeholder="Enter keyword and press Enter" title="" type="text" id="edit-keyword" name="search_block_form" value="<?php print $default_value ?>" size="85" maxlength="128" class="form-text required ctools-auto-submit-processed">
      </div>
  </div>
</div>
