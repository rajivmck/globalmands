
<?php global $user; ?>
<div class="white-box">
<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php if ($id == 'nid'): ?>
    <?php $nid = $field->content; ?>
    <?php if (bookmark_get_item($user->uid, $nid)): ?>
      <?php $fields['nothing']->content = '<div class="field-content bookmark"><span href="#" class="star-icon active" data-nid="' . $nid . '"></span></div>'; ?>
    <?php endif; ?>
  <?php else: ?>
    <?php print $field->wrapper_prefix; ?>
      <?php print $field->label_html; ?>
      <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  <?php endif; ?>
<?php endforeach; ?>
</div>