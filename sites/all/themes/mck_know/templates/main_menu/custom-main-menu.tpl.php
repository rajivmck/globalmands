<?php
$curr_path = current_path();
$frontpage = drupal_get_normal_path(variable_get('site_frontpage', 'node'));
?>
<span class="global-primary-nav-r3 show-nav" data-module="PrimaryNavigation" role="banner">
    <nav class="primary-navigation" role="navigation">
        <ul class="nav-list nav-group-left" style="padding-left: 0px;">
            <?php foreach ($main_menu as $link): ?>

                <?php

                if($curr_path == $link['link']['href']) { ?>
                    <li class="nav-item<?php echo !empty($link['below']) ? ' has-children' : '' ?> active" aria-hidden="true" tabindex="-1">
                <?php } else { ?>
                    <li class="nav-item<?php echo !empty($link['below']) ? ' has-children' : '' ?>" aria-hidden="true" tabindex="-1">
                <?php } ?>
                <a href="<?php echo url($link['link']['href']) ?>"><?php echo $link['link']['title'] ?></a>

                <?php if (!empty($link['below'])): ?>
                    <div class="sub-nav">

                        <header class="sub-nav-header">
                            <a href="<?php echo url($link['link']['href']) ?>" class="close-sub-nav" tabindex="-1" aria-hidden="true"></a>
                            <span class="sub-nav-title" id="nav-group-title-Industries"><?php echo $link['link']['title'] ?></span>
                        </header>

                        <?php echo theme('custom_main_menu_' . $link['link']['localized_options']['attributes']['name'], array('items' => $link['below'])) ?>

                        <div style="clear:both"></div>
                    </div>
                <?php endif ?>
                </li>

            <?php endforeach ?>

            <li class="nav-item">  <a href="#feedback-popup" class="feedback-btn open-popup-link">Feedback</a></li>           
            <li class="nav-item">  <a href="#case-popup" class="feedback-btn open-popup-link">Submit a use case</a></li>
              <!--   <li class="nav-item">  <a href="http://globalmands.intranet.mckinsey.com/sites/default/files/global_1.mp4" class="video-popup video-button">Click to view welcome video</a></li> -->
                       <div id="feedback-popup" class="white-popup mfp-hide">

                         <?php
                                $block = block_load('webform', 'client-block-829');
                                $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
                                $output = drupal_render($render_array);
                                print $output;
                              ?>
                    </div>
                    <div id="case-popup" class="white-popup mfp-hide">


                            <?php
                                $block = block_load('webform', 'client-block-1205');
                                $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
                                $output = drupal_render($render_array);
                                print $output;
                              ?>
                    </div>

        </ul>
    </nav>
</span>
