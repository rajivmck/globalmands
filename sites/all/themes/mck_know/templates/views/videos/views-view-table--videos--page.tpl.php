<div class="card-view video">
    <div class="row">
      <?php foreach ($rows as $row): ?>
          <div class="col-lg-4 col-md-6 col-sm-12">
              <div class="card-top">
                  <div class="video-play"
                       style="background: url('<?php print $row['field_video_thumbnail']; ?>') no-repeat;"
                       data-video="<?php print $row['field_video_file']; ?>" data-title="<?php print $row['title']; ?>"></div>

              </div>
              <div class="card">
                  <div class="card-body">
                      <h5 class="card-title"><?php print $row['title']; ?></h5>
                      <div class="bookmark-abs">
                          <a class="item-bookmark"
                             data-nid="<?php print $row['nid']; ?>"
                             href="javascript:void(0);"><i
                                      class="far fa-bookmark"></i></a>
                      </div>
                      <div class="action-links-items">
                        <?php print $row['field_length']; ?>
                      </div>
                  </div>
              </div>
          </div>
      <?php endforeach; ?>
    </div>
</div>

<div class="table-view" style="display: none;">
    <table <?php if ($classes): ?> class="table table-sm <?php print $classes; ?>"<?php endif ?><?php print $attributes; ?>>
      <?php if (!empty($title) || !empty($caption)): ?>
          <caption><?php print $caption . $title; ?></caption>
      <?php endif; ?>
      <?php if (!empty($header)) : ?>
          <thead>
          <tr>
            <?php foreach ($header as $field => $label): ?>
                <th <?php if ($header_classes[$field]): ?> class="<?php print $header_classes[$field]; ?>"<?php endif; ?>
                        scope="col">
                  <?php print $label; ?>
                </th>
            <?php endforeach; ?>
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
                <?php else: ?>
                      <td <?php if ($field_classes[$field][$row_count]): ?> class="<?php print $field_classes[$field][$row_count]; ?>"<?php endif; ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
                        <?php print $content; ?>
                      </td>
                <?php endif; ?>

              <?php endforeach; ?>
            </tr>
        <?php endforeach; ?>
        </tbody>
    </table>
</div>
