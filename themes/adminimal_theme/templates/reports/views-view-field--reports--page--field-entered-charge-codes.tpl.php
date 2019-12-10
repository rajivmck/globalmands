<?php if (isset($row->field_field_entered_time[0]['raw']['value'])): ?>
  <?php $session = strtotime($row->field_field_entered_time[0]['raw']['value']); ?>
  <?php print l($output, 'admin/config/mck_cc_report/' . $output. '/' . $session); ?>
<?php endif; ?>