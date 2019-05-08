<div class="table-view">
  <table <?php if ($classes): ?> class="table table-sm <?php print $classes; ?>"<?php endif ?><?php print $attributes; ?>>
    <?php if (!empty($title) || !empty($caption)): ?>
      <caption><?php print $caption . $title; ?></caption>
    <?php endif; ?>
    <?php if (!empty($header)) : ?>
      <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>
          <?php if ($label == 'Nid'): ?>
            <?php $label = 'Bookmark'; ?>
            <th <?php if ($header_classes[$field]): ?> class="<?php print $header_classes[$field]; ?>"<?php endif; ?>
              scope="col"><?php print $label; ?> </th>
          <?php elseif ($label != 'Case Study' && $label != 'Credential' && $label != 'Video'): ?>
            <th <?php if ($header_classes[$field]): ?> class="<?php print $header_classes[$field]; ?>"<?php endif; ?>
              scope="col"><?php print $label; ?> </th>
          <?php endif; ?>
        <?php endforeach; ?>
        <th>Action</th>
      </tr>
      </thead>
    <?php endif; ?>
    <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
      <tr <?php if ($row_classes[$row_count]): ?> class="<?php print implode(' ', $row_classes[$row_count]); ?>"<?php endif; ?>>
        <?php foreach ($row as $field => $content): ?>
          <?php if ($field == 'nid'): ?>
            <td <?php if ($field_classes[$field][$row_count]): ?> class="<?php print $field_classes[$field][$row_count]; ?>"<?php endif; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <a class="item-bookmark"
                 data-nid="<?php print $row['nid']; ?>"
                 href="javascript:void(0);"><i
                  class="far fa-bookmark"></i></a>
            </td>
          <?php elseif ($field == 'field_credential' && $content): ?>
            <td <?php if ($field_classes[$field][$row_count]): ?> class="<?php print $field_classes[$field][$row_count]; ?>"<?php endif; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <a
                href="<?php print $content; ?>"
                target="_blank">Download</a>
            </td>
          <?php elseif ($field == 'field_case_study' && $content): ?>
            <td <?php if ($field_classes[$field][$row_count]): ?> class="<?php print $field_classes[$field][$row_count]; ?>"<?php endif; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <a class="modal-load"
                 href="javascript:void(0);"
                 data-case-study-nid="<?php print $row['nid']; ?>"
              >View</a> | <a
                href="<?php print $content; ?>"
                target="_blank">Download</a>
            </td>
          <?php elseif ($field == 'field_video_file' && $content): ?>
            <td>
              <a href="javascript:void(0);" class="video-play-anchor"
                 data-video="<?php print $row['field_video_file']; ?>" data-title="<?php print $row['title']; ?>">View</a>
            </td>
          <?php elseif ($field != 'field_case_study' && $field != 'field_credential' && $field != 'field_video_file'): ?>
            <td <?php if ($field_classes[$field][$row_count]): ?> class="<?php print $field_classes[$field][$row_count]; ?>"<?php endif; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <?php print $content; ?>
            </td>
          <?php endif; ?>

        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
    </tbody>
  </table>