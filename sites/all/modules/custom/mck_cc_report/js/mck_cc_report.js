(function($){
  Drupal.behaviors.bookmark = {
    attach: function(context, settings) {
      
      /*-------Add to bookmark-------*/
      $('a.mck-icon__download, a.download').click(function(event){
        var $this = $(this);
        var href = $this.attr('href');
        $.ajax({
          type: 'POST',
          url: Drupal.settings.basePath + 'mck_cc_report/add',
          data: {href: href},
          cache: false
        }).done(function(received) {
          $('.message-blink').remove();
          if (received.result === 'done') {
            
          } 
        });
      });
      
    }
  };
})(jQuery);