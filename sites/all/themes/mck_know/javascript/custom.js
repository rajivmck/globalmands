(function ($) {
  Drupal.behaviors.globalmands = {
    attach: function (context, settings) {
      

     $("#search-block-form").attr("action", "search-mr?keyword=");
     $("#search-block-form").attr("method", "get");
     $('#search-block-form input[type="hidden"]').remove();

      $('.compass:contains("Pricing Compass")').parent().addClass("pricing-compass");
      $('.compass:contains("Sales Compass")').parent().addClass("sales-compass");
      /*-------Filters-------*/    
      $('.right-sidebar .viewport .filter-wrapper > a').off("click").on("click", function(e) {
        e.preventDefault();
        var parent = $(this).parent();
        if (!parent.hasClass('active')) {
          parent.addClass('active');
          $('.form-type-select', parent).slideDown(300);
        } else {
          parent.removeClass('active');
          $('.form-type-select', parent).slideUp(300);
        }
      });
      
      $('.right-sidebar .filter-wrapper .title-checkbox').click(function(){
        var parent = $(this).parent();
         if(!$(this).hasClass('active')) {
          $(this).addClass('active');
          $('.form-type-select input', parent).each(function(){
            $(this).prop('checked', true);
          });
        } else {
          $(this).removeClass('active');
          $('.form-type-select input', parent).each(function(){
            $(this).prop('checked', false);
          });
        }
        $('.right-sidebar .ctools-auto-submit-processed').submit();
      });
      
      $('.right-sidebar .filter-wrapper .form-type-select').each(function(){
        var fullBox = 1;
        var $this = $(this);
        var parent = $(this).parents().eq(1).prev();
        $('input', $this).each(function(){
          if ($(this).is(':checked')) {
            $(this).parents().addClass('active');
            $this.show();
            $('.title-checkbox', $this.parent()).addClass('active-not-full');
          } else {
            fullBox = 0;
          }
        });
        if (fullBox === 1) {
          $('.title-checkbox', $this.parent()).addClass('active').removeClass('active-not-full');
        }
      });
      
      $('.right-sidebar .bef-tree li').each(function(){
        if ($('.bef-tree-child', this).hasClass('bef-tree-child')/* && !$(this).prev().hasClass('active')*/) {
          $('.bef-tree-child', this).addClass('hidden');
          //$('.bef-tree-child', this).prev().addClass('collapsed');
          $(this).addClass('collapsed');
        }
      });
      
      $('.right-sidebar .bef-tree li.collapsed label').click(function(e){
        e.preventDefault();
        e.stopPropagation();
        var parent = $(this).parents().eq(1);
        if (!parent.hasClass('active')) {
          parent.addClass('active');
          $(this).parent().addClass('active');
        } else {
          parent.removeClass('active');
          $(this).parent().removeClass('active');
        }
      });
      
      $('.right-sidebar .bef-tree input.form-checkboxes').click(function(e){
        e.preventDefault();
        var $this = $(this);
        var parent = $this.parents().eq(1);
        var topParent = $this.parents().eq(2);
        var collapsedParent = $this.parents().eq(3);
        var elementsCount = $('input', topParent).length;
        var elementsActive = 0;
        if ($('.bef-tree-child', parent).length) {
          $($this).removeClass('active-not-full');
          $('> .bef-tree-child input', parent).each(function(){
            if ($this.is(':checked')) {
              $(this).prop('checked', true);
            } else {
              $(this).prop('checked', false);
            }
          });
        }
        if ($(topParent).hasClass('bef-tree-child')) {
          $('> li .form-type-bef-checkbox input', topParent).each(function(){
            if ($(this).is(':checked')) {
              elementsActive++;
            }
          });
          if (elementsActive === 0) {
            $('> .form-type-bef-checkbox input', collapsedParent).prop('checked', false);
          }
          if (elementsCount === elementsActive) {
            $('> .form-type-bef-checkbox input', collapsedParent).prop('checked', true);
          }
        }
        $('.right-sidebar .ctools-auto-submit-processed').submit();
      });
      
      $('.right-sidebar .bef-tree-child').each(function(){
        var fullBox = 1;
        var $this = $(this);
        var parent = $(this).parent();
        $('input', $this).each(function(key, val){
          if (parent.hasClass('active')) {
            if (!$(this).is(':checked')) {
              fullBox = 0;
              $('> .form-type-bef-checkbox label', parent).addClass('active-not-full');
            } else {
            }
          }
        });
        if (fullBox === 1) {
          $('> .form-type-bef-checkbox label', parent).removeClass('active-not-full');
        }
      });
      
      if ($('#edit-field-recommended-value').find("[value='" + 1 + "']").is(':selected')) {
        $('.recommended-case-check').prop('checked', true);
      }
      
      $('.recommended-case-check').change(function(event){
        event.preventDefault();
        event.stopPropagation();
        var url = window.location.href;
        if ($(this).is(':checked')) {
          var urlParts = url.split('field_recommended_value=');
          if (typeof urlParts[1] !== 'undefined') {
            var urlPartsVal = urlParts[1].split('&');
            var newUrl = url.replace('field_recommended_value=' + urlPartsVal[0], 'field_recommended_value=1');
          } else {
            var urlParts = url.split('?');
            if (typeof urlParts[1] === 'undefined') {
              var newUrl = url + '?field_recommended_value=1';
            } else {
              var newUrl = url + '&field_recommended_value=1';
            }
          }
        } else {
          var urlParts = url.split('?');
          if (url.indexOf("field_recommended_value") >= 0) {
            var newUrl = url.replace('field_recommended_value=1', '');
          }
        }
        window.location.href = newUrl;
      });
      
      /*-------Sort by-------*/
      var active = 0;
      $('.right-sidebar .sort-by-wrapper .views-widget-sort-by a,.sort-title .sort-by-wrapper .views-widget-sort-by a,.left-sidebar .sort-by-wrapper .views-widget-sort-by a').each(function(){
        if($(this).hasClass('active')) {
          active = 1;
        }
      });
      if (active === 0) {
        $('.right-sidebar .sort-by-wrapper .views-widget-sort-by a,.sort-title .sort-by-wrapper .views-widget-sort-by a,.left-sidebar .sort-by-wrapper .views-widget-sort-by a').first().addClass('active');
      }
      
      $('.right-sidebar .sort-by-value,.sort-title .sort-by-value,.left-sidebar .sort-by-value').text($('.left-sidebar .sort-by-wrapper .views-widget-sort-by a.active,.right-sidebar .sort-by-wrapper .views-widget-sort-by a.active,.sort-title .sort-by-wrapper .views-widget-sort-by a.active').text());
      
      $('.right-sidebar .sort-by-wrapper .sort-by-value,.sort-title .sort-by-value,.left-sidebar .sort-by-wrapper .sort-by-value,.sort-title .sort-by-value').on('click', function(){
        $('.right-sidebar .views-widget-sort-by a,.sort-title .views-widget-sort-by a,.left-sidebar .views-widget-sort-by a,.sort-title .views-widget-sort-by a').parent().show();
        $('.right-sidebar .views-widget-sort-by a.active,.sort-title .views-widget-sort-by a.active,.left-sidebar .views-widget-sort-by a.active').parent().hide();
        $(this).next().show();
      });
            
      $('.right-sidebar .views-widget-sort-by .bef-select-as-links a, .sort-title .views-widget-sort-by .bef-select-as-links a,.left-sidebar .views-widget-sort-by .bef-select-as-links a').on('click', function(){
        $(this).parents().eq(3).hide();
      });
      
      $('.right-sidebar .form-item-sort-by,.sort-title .form-item-sort-by,.left-sidebar .form-item-sort-by').mouseleave(function(){
        $(this).hide();
      });
      
      /*-------Seaarch form-------*/
      $('.search-box-inner .form-submit').hover(function(){
        if (!$('.search-box-inner .form-item-search-block-form .form-text').is(':animated') && !$('.page-class').hasClass('front-wrapper')) {
          $('.search-box-inner .form-item-search-block-form .form-text').animate({
            width: "250px",
            right: "50px"
          }, 300);
        }
      });
      $('.search-box-inner').mouseleave(function(){
        if (!$('.page-class').hasClass('front-wrapper')) {
          $('.search-box-inner .form-item-search-block-form .form-text').animate({
            width: "0",
            right: "-30px"
          }, 300);
        }
      });
      $('.search-box-inner .form-submit').click(function(event){
        if (!$('.search-box-inner .form-item-search-block-form .form-text').val()) {
          event.preventDefault();
        }
      });

      // $(document).on('submit','form#search-block-form',function(){
      //    // code
      //    //  var action = $(this).val() == "people" ? "user" : "content";
      //    console.log("asdasd");
      //    if (!($("#search-block-form").attr('action').indexOf("search-mr") !== -1 )){
      //      event.preventDefault();
           
      //      $(this).submit();
      //    }
      // });
       


      $(document).ajaxComplete(function(event, xhr, settings) {
        if (settings.data.indexOf("submitted") != -1) {
          Drupal.CTools.Modal.dismiss();
        }
        if (settings.data.indexOf("vote") != -1) {
          $('.rating-count').text($('.total-votes span').text());
        }
      });
      
      /*-------Related items-------*/
      initialize_owl($('.owl-carousel'));
      function initialize_owl(el) {
        el.owlCarousel({
          margin: 20,
          responsiveClass: true,
          dots: false,
          nav: true,
          navText: ['<div class="mck-icon__carrot-left" aria-hidden="true"></div>', '<div class="mck-icon__carrot-right" aria-hidden="true"></div>'],
          responsive: {
            0: {
              items: 4,
              nav: false
            },
            600: {
              items: 4,
              nav: false
            },
            800: {
              items: 4,
              nav: true
            },
            1000: {
              items: 4,
              nav: true
            }
          }
        });
      }
      
      $('.more-info-link').click(function(){
        var parent = $(this).parent();
        if (!$(this).hasClass('active')) {
          $(this).addClass('active');
          $('.carousel-wrapper', parent).addClass('active');
        } else {
          $(this).removeClass('active');
          $('.carousel-wrapper', parent).removeClass('active');
        }
      });
      
      /*-------Openn video in popup------*/
      $('a.video-popup').magnificPopup({
        disableOn: 700,
        type: 'iframe',
        mainClass: 'mfp-fade',
        removalDelay: 160,
        preloader: false,
        fixedContentPos: false
      });
      
      
      /*$('#quicktabs-front_page .quicktabs-tabs a').on('click', function(){
        $('.top-filters-wrapper form').hide();
        $('.right-sidebar form').hide();
        switch ($(this).attr('id')) {
          case 'quicktabs-tab-front_page-0':
            $('#views-exposed-form-video-page-2').show();
            $('.right-sidebar #views-exposed-form-video-page-2').show();
          break;
          case 'quicktabs-tab-front_page-1':
            $('#views-exposed-form-case-studies-page-2').show();
            $('.right-sidebar #views-exposed-form-case-studies-page-2').show();
          break;
        }
      });*/

        exposedSelectListTransform();
    }
  };
})(jQuery);
if ($("body").hasClass("case-studies")) {
    $(window).on('load', function() {
      var now, lastDatePopupShowed;
      now = new Date();

      if (localStorage.getItem('lastDatePopupShowed') !== null) {
        lastDatePopupShowed = new Date(parseInt(localStorage.getItem('lastDatePopupShowed')));
      }

      if (((now - lastDatePopupShowed) >= (15 * 86400000)) || !lastDatePopupShowed) {
        $.magnificPopup.open({
          items: { src: 'http://globalmands.intranet.mckinsey.com/sites/default/files/global_1.mp4' },
          type: 'iframe'
        }, 0);

        localStorage.setItem('lastDatePopupShowed', now);
      }
    });
}

(function($) {
    $('body').on('click', '.views-exposed-widget > label', function(){
        var id = $(this).parent().attr('id');
        $('body').toggleClass(id);
    });

    $('body').on('click', '.display-view', function(){
        $('body').removeClass('card-view');
        $('body').removeClass('table-view');
        var view = $(this).attr('data-view');
        $('body').addClass(view);
    });

    $('body').on('click', '.practice-recommendation', function(){
       console.log($(this).val());
    });
})(jQuery);

function exposedSelectListTransform() {
    $ = jQuery;

    if ($('#edit-sort-by').length && $('#select-placeholder #edit-sort-by').length <= 0) {
        $('#edit-sort-by').clone().appendTo('#select-placeholder');

        $('#select-placeholder #edit-sort-by').prepend('<option selected value="field_date_value">Sort by</option>');

        $('body').on('change', '#select-placeholder #edit-sort-by', function(){

            if ($(this).val()) {
                $('.views-widget-sort-by #edit-sort-by').val($(this).val());
                $('.views-submit-button input').click();
            }
        });
    }
}