/**
 * Drupal behavior for entries list blocks.
 * @file
 */

(function ($) {
  Drupal.behaviors.entriesList = {
    attach: function (context, settings) {

      //Homepage slider
      if($(".front").length) {
        $('.box-slider').bxSlider({
          pager: false,
          minSlides: 1,
          maxSlides: 3,
          slideWidth: 320,
          slideMargin: 20,
          infiniteLoop: false,
          responsive: true,
          touchEnabled: true,
          moveSlides: 1,
          hideControlOnEnd: false,
          useCSS: true
        });
      }

      $(".entries-container .tabs li a", context).click(function (e) {
        e.preventDefault();
        var lists = $('.list .wrap .content .view-entries-list');

        // Find and hide the currently active list.
        var prevItem = $('.entries-container .tabs li.active');
        var prevIndex = prevItem.index();
        prevItem.toggleClass('active');
        $(lists[prevIndex]).toggle();

        // Show the target list.
        var nextItem = $(this).parent();
        var nextIndex = nextItem.index();
        nextItem.toggleClass('active').removeClass('inactive');      
        $(lists[nextIndex]).toggle();
      });

      // Hide popular and newest blocks on initial page load.
      var listBlocks = $('.list .wrap .content .view-entries-list');
      $(listBlocks[1]).toggle();
      $(listBlocks[2]).toggle();
    }
  };
}(jQuery));
