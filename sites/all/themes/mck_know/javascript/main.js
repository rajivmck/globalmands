 $(document).ready(function() {
  // Full Screen Video
  function setVideoHeight(){
    var windowHeight = $(window).height();
    /*if('#admin-menu') {
      var adminHeight = $('#admin-menu').height();
      windowHeight = windowHeight - adminHeight;
    }*/
    if('.slicknav_menu') {
      var slickHeight = $('.slicknav_menu').height();
      windowHeight = windowHeight - slickHeight;
    }
    $('.homepage-videobanner').css({'height' : windowHeight, 'overflow' : 'hidden'});
  }
  setVideoHeight();
  var doit;
  window.onresize = function(){
    clearTimeout(doit);
    doit = setTimeout(setVideoHeight, 600);
  };

  // Our People popup
    $('.inline-popup').on('click', function () {
        var popup = $(this).parents('.item').find('.people-popup')
        $.magnificPopup.open({
            items: {
                src: popup,
            },
            type: 'inline'
        });
    });



/* Set speakers item height */
    var sectionsWrapper = $('section.up.three-up.speakers.span-full-width, #three-up, .three-columns');
    setColHeight(sectionsWrapper);    
    window.onresize = function(){
      setColHeight(sectionsWrapper);
   };

 
 /* Custom Gallery Slider - slick Slider */


  var $sliderStatus = $('.slider-active');
  var $slickElement = $('#gallery-slideshow');


  $slickElement.on("init", function(event, slick){
           var i = 1;
           $sliderStatus.text(i + '/' + slick.slideCount);
    });
  

    
    $slickElement.slick({
          centerPadding: "240px",
          dots: false,
          arrows: true,
          centerMode: true,
          focusOnSelect: true,
           responsive: [
             {
                breakpoint: 992,
                settings: {
                  arrows: true,
                  centerMode: true,
                  centerPadding: "80px",
                }
              },
              {
                breakpoint: 768,
                settings: {
                  arrows: true,
                  centerMode: false,
                  centerPadding: "0",
                }
              },
              {
                breakpoint: 480,
                settings: {
                  arrows: true,
                  centerMode: false,
                  centerPadding: "0",
                }
              }
            ]
    });



    $slickElement.on("afterChange", function(event, slick, currentSlide){
        //console.log(currentSlide);
           var i = (currentSlide ? currentSlide : 0) + 1;
           $sliderStatus.text(i + '/' + slick.slideCount);
    });
    

    if (/Mobi/.test(navigator.userAgent)) {
        updateSlider();
     }




 $('.profile-card a, .page-node-90 #four-up .item a, .mfp-iframe, .banner-video-link').magnificPopup({
    type:"iframe"
 });


$(".speakers").each( function(){
      var parentDiv = $(this);
      var numItems = parentDiv.find(".item").length;
      console.log("items"+numItems);
      if(numItems <= 2){
         parentDiv.addClass("speakers-two-col");
      }
});


if($(".global-header").length > 0){
  $(".page-class").addClass("fixed-header");
}



   /* Magnific Pop Up - Customized to show pop based on pop up type selected */

   // initiates pop up for any link with "pop-up-link" as class
   $('.pop-up-link').magnificPopup();


   // treats pop up as "image" and "gallery" type

$('.popup-link-slideshow').on('click', function(event) {
    event.preventDefault();
    
    var gallery =$('#pop-up-gallery');
    
    $(gallery).magnificPopup({
      delegate: 'img',
      type:'image',
      gallery: {
        enabled: true
      }
    }).magnificPopup('open');
  });

 $('.popup-gallery').each(function() {
    $(this).magnificPopup({
        delegate: 'a', 
        type: 'image',
        gallery:{enabled:true, navigateByImgClick: true,}
    });
});   



/*
var browser = navigator.userAgent;
if (browser.match("Firefox")) {
  var anchor_id = window.location.hash; 
  //console.log(anchor_id);
  var new_position = $(anchor_id).offset(); 
  //console.log(new_position);
  window.scrollTo(new_position.left,new_position.top); 
}
*/

   /*  End of magnific pop up */


  
$('#open-popup').magnificPopup({
    items: [
      {
        src: '#my-popup', // CSS selector of an element on page that should be used as a popup
        type: 'inline'
      }
    ],
    gallery: {
      enabled: true
    }
});
 
 
 
 
         $('.owl-carousel').owlCarousel({
            loop:true,
            margin:10,
            autoHeight:true,
            responsiveClass:true,
            responsive:{
                0:{
                    items:1,
                    nav:false
                },
                600:{
                    items:1,
                    nav:false
                },
                1000:{
                    items:1,
                    nav:false,
                    loop:false
                }
            }
        });

    var $accordion = $('.accordion.career-person');
    $accordion.click(function () {
        
      $(this).toggleClass('open');

    });

    //force the username on the inital logintoboggan page
    $(".page-toboggan #edit-name").val("gils");
    $("").hide();

    $(window).scroll(function(){
        $('header').removeClass('_menu-open');
    });

/*


    $(window).scroll(function() {
    if ($(this).scrollTop()) {
        $(".back-top-top").fadeIn();
    } else {
        $(".back-to-top").fadeOut();
    }
      if($(window).scrollTop() + $(window).height() < $(document).height() - $(".footer").height()) {
        $('.back-top-top').css("position","fixed");    //resetting it
        $('.back-top-top').css("bottom","0"); //resetting it
}
        if($(window).scrollTop() + $(window).height() > $(document).height() - $("#footer").height()) {
        $('.back-top-top').css("position","relative"); // make it related
        $('.back-top-top').css("bottom","60px"); // 60 px, height of #toTop
 }
    
    });
*/


    $(".back-to-top").on("click",function() {
       console.log(1);
       $("html, body").animate({scrollTop: 0}, 1000);
    });




    //showMoreSpeakers();

    function showMoreSpeakers(){
        totalItems = $(".speakers-participants-list .profile-card.three-up-col").size();
        //console.log(totalItems);
        itemsToShow=3;
        $('.speakers-participants-list .profile-card.three-up-col:lt('+itemsToShow+')').show();
        $('.load-more-speakers').click(function () { 
        itemsToShow= (itemsToShow+3 <= totalItems) ? itemsToShow+3 : totalItems;
        $('.speakers-participants-list .profile-card.three-up-col:lt('+itemsToShow+')').show();
        });
    }



 if($('#my-video').length > 0){
      player = videojs('#my-video');
      player.on('ready', function () {
       player.addClass('show');
      });

      var overlay = $('.videojs-hero-overlay, .banner-video-overlay');
      player.on(['play', 'playing'], function () {
       overlay.addClass('hide');
       $('.homepage-videobanner').css({'max-height' : "600px", 'overflow' : 'hidden'});
      });
      player.on(['pause'], function () {
       overlay.removeClass('hide');
       $('.homepage-videobanner').css({'max-height' : "500px", 'overflow' : 'hidden'});
      });

    }


 $('.mck-play-icon').click(function () {

    var $videoElement = $(this).parents('.banner-video').find('video');
    $videoElement.addClass('show');
    $videoElement.trigger('play');

  });


 function setColHeight(section){

     $(section).each(function(){       
       var maxHeight = 0;
       var currentSection = $(this);
       currentSection.find(".item").css("height","auto");
            currentSection.find(".item").each(function(){
               if ($(this).height() > maxHeight) { 
                  maxHeight = $(this).height();
              }
            });
             currentSection.find('.item').height(maxHeight);
     });
    
  }
    
});

function updateSlider(){
 // $('#gallery-slideshow').addClass('gallery-slick-mob');
  var arrowOffsetTop = $('.slick-slide img').height() + 50;
  var sliderCounterTop = $('.slick-slide img').height() + 40;
  $('.slick-prev, .slick-next').css('top',arrowOffsetTop);
  $('#gallery-slideshow .slider-active').css('top',sliderCounterTop);

}

