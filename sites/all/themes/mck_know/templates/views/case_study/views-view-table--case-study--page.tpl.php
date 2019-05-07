<div class="card-view case-study-view">
    <div class="row">
      <?php foreach ($rows as $row): ?>
          <div class="col-lg-4 col-md-6 col-sm-12">
              <div class="card">
                  <div class="card-body">
                    <?php if ($row['field_go_see_available'] == 'Yes'): ?>
                        <div class="go-and-see top-right"></div>
                    <?php endif; ?>
                      <div class="info-header">
                        <span class="date-gray"><?php print $row['field_date']; ?> </span>
                        <h5 class="card-title modal-load" data-case-study-nid="<?php print $row['nid']; ?>"><?php print $row['title']; ?></h5>
                          <div class="taxonomy case-id">
                              <span class="view-label">Case ID: </span> <?php print $row['field_id']; ?>
                          </div>
                      </div>

                      <div class="info-data">
                          <?php if ($row['field_cst_contacts']): ?>
                              <div class="cst-contacts">
                                  <span class="view-label">CST Contacts: </span> <?php print $row['field_cst_contacts']; ?>
                              </div>
                          <?php endif; ?>

                          <div class="taxonomy">
                              <div>
                                  <span class="view-label">Tribes: </span> <?php print $row['field_tribes']; ?>
                              </div>

                              <div>
                                  <span class="view-label">Sub-sector: </span> <?php print $row['field_sub_sector']; ?>
                              </div>

                              <div>
                                  <span class="view-label">Regions: </span> <?php print $row['field_regions']; ?>
                              </div>

                              <?php if ($row['field_reference_case']): ?>
                                  <div>
                                      <div class="reference-case">Reference Case</div>
                                  </div>
                              <?php endif; ?>
                          </div>
                      </div>
                      <div class="action-links-items">
                          <a class="download-ico"
                             href="<?php print $row['field_case_study'] ?>"
                             target="_blank">Download</a>
                          <a class="item-bookmark"
                             data-nid="<?php print $row['nid']; ?>"
                             href="javascript:void(0);"><i
                                      class="far fa-bookmark"></i></a>

                          <span class="pages"><?php print $row['field_number_of_pages']; ?> pages</span>
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
              <?php if ($label != 'Case Study' && $label != 'Number of Pages' && $label != 'Reference Case'): ?>
                    <th <?php if ($header_classes[$field]): ?> class="<?php print $header_classes[$field]; ?>"<?php endif; ?> scope="col"><?php print $label; ?> </th>
              <?php endif; ?>

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
                <?php elseif ($field != 'field_case_study' && $field != 'field_number_of_pages' && $field != 'field_reference_case'): ?>
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
