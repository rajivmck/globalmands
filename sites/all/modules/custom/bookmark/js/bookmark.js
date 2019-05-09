(function($){
  Drupal.behaviors.bookmark = {
    attach: function(context, settings) {
      
      /*-------Add to bookmark-------*/
      $('.star-icon').click(function(event){
        event.preventDefault();
        var $this = $(this);
        var nid = $this.data('nid');
        if ($this.hasClass('active')) {
          $.ajax({
            type: 'POST',
            url: Drupal.settings.basePath + 'bookmark/remove',
            data: {nid: nid},
            cache: false
          }).done(function(received) {
            $('.message-blink').remove();
            if (received.result === 'done') {
              $this.removeClass('active');
            } 
          });
        } else {
          $.ajax({
            type: 'POST',
            url: Drupal.settings.basePath + 'bookmark/add',
            data: {nid: nid},
            cache: false
          }).done(function(received) {
            $('.message-blink').remove();
            if (received.result === 'done') {
              $this.addClass('active');
            } 
          });
        }
      });
    }
  };
})(jQuery);