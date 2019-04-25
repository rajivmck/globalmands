(function($){
  Drupal.behaviors.bookmark = {
    attach: function(context, settings) {

      /*-------Add to bookmark-------*/
      $('.item-bookmark').click(function(event){
        event.preventDefault();
        var $this = $(this);
        var nid = $this.data('nid');
        if ($this.hasClass('active')) {
          $.ajax({
            type: 'POST',
            url: Drupal.settings.basePath + 'bookmark_new/remove',
            data: {nid: nid},
            cache: false
          }).done(function(received) {
            if (received.result === 'done') {
              $('[data-nid=' + received.nid + '] .far').removeClass('fas');
              $this.removeClass('active');

              var index = bookmarks.indexOf(received.nid);
              if (index > -1) {
                bookmarks.splice(index, 1);
              }
            }
          });
        } else {
          $.ajax({
            type: 'POST',
            url: Drupal.settings.basePath + 'bookmark_new/add/',
            data: {nid: nid},
            cache: false
          }).done(function(received) {
            if (received.result === 'done') {
              $('[data-nid=' + received.nid + '] .far').addClass('fas');
              $this.addClass('active');
              bookmarks.push(received.nid);

            }
          });
        }
      });

      if (typeof(bookmakrs) != "undefined") {
        $.each(bookmarks, function (key, value) {
          $('[data-nid=' + value + ']').addClass('active');
          $('[data-nid=' + value + '] .far').addClass('fas');
        });
      }
    }
  };
})(jQuery);