<?php
function ds_views_two_col() {
  return array(
    'label' => t('Top + Two Column + Bottom'),
    'regions' => array(
      'top' => t('Top'),
      'col_left' => t('Column Left'),
      'col_right' => t('Column Right'),
      'bottom' => t('Bottom')
    )
  );
}