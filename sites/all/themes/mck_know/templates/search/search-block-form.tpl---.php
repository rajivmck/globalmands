<?php

/**
 * @file
 * Displays the search form block.
 *
 * Available variables:
 * - $search_form: The complete search form ready for print.
 * - $search: Associative array of search elements. Can be used to print each
 *   form element separately.
 *
 * Default elements within $search:
 * - $search['search_block_form']: Text input area wrapped in a div.
 * - $search['actions']: Rendered form buttons.
 * - $search['hidden']: Hidden form elements. Used to validate forms when
 *   submitted.
 *
 * Modules can add to the search form, so it is recommended to check for their
 * existence before printing. The default keys will always exist. To check for
 * a module-provided field, use code like this:
 * @code
 *   <?php if (isset($search['extra_field'])): ?>
 *     <div class="extra-field">
 *       <?php print $search['extra_field']; ?>
 *     </div>
 *   <?php endif; ?>
 * @endcode
 *
 * @see template_preprocess_search_block_form()
 */
?>


<!-- THEME DEBUG -->
<!-- CALL: theme('search_block_form') -->
<!-- BEGIN OUTPUT from 'modules/search/search-block-form.tpl.php' -->
<form action="/media-services/fig/cs-insurance/search" method="get" id="search-block-form" accept-charset="UTF-8"><div>
<div class="container-inline">
      <h2 class="element-invisible">Search form</h2>
    <div class="form-item form-type-textfield form-item-search-block-form">
  <label class="element-invisible" for="edit-search-block-form--2">Search </label>
 <input title="Enter the terms you wish to search for." placeholder="Search Keyword" type="text" id="edit-search-block-form--2" name="search_block_form" value="" size="15" maxlength="128" class="form-text" style="width: 0px; right: -30px;">
</div>
<div class="form-actions form-wrapper" id="edit-actions"><input type="image" id="edit-submit" name="submit" value="Search" src="http://dev-drupaldev-lx07.amdc.mckinsey.com/media-services/fig/sites/all/themes/mck_know/images/search.png" class="form-submit"></div><input type="hidden" name="form_build_id" value="form-icunZ7IAJ60Vfjf8dt9zSo7nGSY8d688lddx95JAj_s">
<!-- <input type="hidden" name="form_token" value="3zPQj-XSocitm6-oEUin8I1sraRRu4KHF6GaaRRQpb8">
<input type="hidden" name="form_id" value="search_block_form"> -->
<?php echo $search['hidden']; ?>
</div>


</div></form>

<!-- END OUTPUT from 'modules/search/search-block-form.tpl.php' -->

<!-- <input type="text" id="edit-search-block-form--2" name="search_block_form" value="" placeholder="Search..." size="15" maxlength="128" />
<input class="button" id="edit-submit" name="op" value="GO!" type="submit" /> -->
