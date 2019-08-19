<?php 
  global $base_url;
?>
<button class="menu-toggle" role="button" type="button">
  <div class="menu-hamburger">
    <span class="visually-hidden">Toggle Menu</span>
  </div>
</button>
<section class="hamburger-nav" data-module="HamburgerNav">
  <div class="main-nav-inner">
    <a class="mck-logo-icon" href="<?php echo url('<front>') ?>" tabindex="-1">
      <span class="visually-hidden">McKinsey &amp; Company Home</span>
    </a>
    <nav class="main-nav" data-level="-menu-level0" role="menu">
      <ul class="nav-list nav-group-left">
        <li role="menuitem" aria-haspopup="true" class="nav-item nav-link-item" aria-hidden="true" tabindex="-1">
          <a href="<?php print $base_url; ?>" tabindex="-1">Home</a>
        </li>

      <?php foreach ($main_menu as $item): ?>

        <li role="menuitem" aria-haspopup="true" class="nav-item nav-link-item" aria-hidden="true" tabindex="-1">
          <a href="<?php echo url($item['link']['href']) ?>" tabindex="-1"><?php echo $item['link']['title'] ?></a>

          <?php if (!empty($item['below'])): ?>
            <?php echo theme('slide_menu_' . $item['link']['localized_options']['attributes']['name'], array('item' => $item)) ?>
          <?php endif ?>

        </li>
      <?php endforeach ?>
         <li class="nav-item">  <a href="feedback" class="nav-item nav-link-item" >Feedback</a></li>
           
          <li class="nav-item">  <a href="case-library-submissions" class="nav-item nav-link-item" >Submit a new case</a></li>
      </ul>
    </nav>
  </div>
</section>

<div class="hamburger-curtain"></div>
