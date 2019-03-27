<?php
/**
 * Variables
 * - $nodes
 */
?>
<div class="bookark-related-content">
	<?php if(!empty($nodes)) { ?>
		<div class="row">
			<?php foreach ($nodes as $node) { 
				$serviceLines = isset($node->field_service_line) ? $node->field_service_line['und'] : NULL;
				$type = isset($node->field_type) ? $node->field_type['und'] : NULL;
				$title = isset($node->title) ? $node->title : NULL;
				$nid = isset($node->nid) ? $node->nid : NULL;
				$nodeURL = drupal_get_path_alias('node/'.$nid);
				$terms = '';
				$types = '';
				$x = 0;

				foreach($serviceLines as $serviceLine) {

					$term = taxonomy_term_load($serviceLine['tid']);
					$url = drupal_get_path_alias('taxonomy/term/'.$serviceLine['tid']);
				
					if($x == 0) {
						$terms .= '<a href="'.$url.'">' . $term->name . '</a>';
					} else {
						$terms .= ', <a href="'.$url.'">' . $term->name . '</a>';
					}

					$x++;
				} 
				foreach($type as $typeCat) {

					$typeLoad = taxonomy_term_load($typeCat['tid']);
					$typeLower =strtolower($typeLoad->name);
				
						$types .= '<a href="./type/'.$typeLower.'">' . $typeLoad->name . '</a>';
			
					$x++;
				}

				?>

				<div class="col-lg-4 col-md-6 col-sm-12">
					<div class="white-box">
						<div class="field-content bottom-box">
							<div class="valign-wrapper">
								<div class="file-icon"><img src="./sites/all/themes/mck_know/images/file-icon.png"></div>
								<div class="row">
									<div class="col-lg-10 col-md-10">
										<div class="bottom-tags">
											<?php echo $terms; ?>
										</div>
									</div>
								</div>
							</div>
						</div>
						<div class="field-content doc-title">
							<a href="<?php print $nodeURL;?>" class="video-popup"><?php print $title;?></a>
						</div>
						<div class="field-content type-bookmark-wrapper">
							<div class="field-content type-link">
									<?php echo $types; ?>
							</div>
							<div class="field-content bookmark">
								<div class="gray-bk">
									<div class="valign-wrapper">
										<div><a href="node/<?php print $nid;?>" class="mck-icon__download video-popup"> </a></div>
										<div><span href="#" class="star-icon" data-nid="<?php print $nid;?>"></span></div>
									</div>
								</div>
							</div>
						</div>
					</div>
				</div>
			<?php } ?>
		</div>
	<?php } else {
		echo '<p>No Case Studies bookmarked.</p>';
	} ?>
</div>