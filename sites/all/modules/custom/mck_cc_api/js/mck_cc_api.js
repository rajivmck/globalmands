
(function($) {
    Drupal.behaviors.mck_cc_api = {
        attach: function (context, settings) {
            var toggle = settings.mck_cc_api.toggle;
            if(toggle) {
                if(sessionStorage.getItem('cc_popup_lastOpened') == null ) {
                    var title = settings.mck_cc_api.title;
                    var subtitle = settings.mck_cc_api.subtitle;
                    var siteFolder = (settings.mck_cc_api.sitefolder == null) ? "" : settings.mck_cc_api.sitefolder;
                    //Modal options
                    $("#popup-izimodal").iziModal({
                        title: title, //Modal title
                        subtitle: subtitle, //Modal subtitle
                        fullscreen: false, //Icon to expand modal to fullscreen
                        headerColor: 'rgb(51, 76, 123)', //Color of modal header. Hexa colors allowed.
                        overlayColor: 'rgba(0, 0, 0, 0.4)', //Color of overlay behind the modal
                        iconColor: '',
                        iconClass: 'icon-chat',
                        closeOnEscape: false,
                        show: true,
                        focusInput: true,
                        bodyOverflow: true,
                        overlayClose: false,
                        closeButton: false,
                        transitionOut: 'fadeOutDown',
                        transitionIn: 'fadeInUp',
                        onOpening: function() {
                            $("body > *").not("#popup-izimodal").addClass("blur-all");
                            $("#popup-izimodal").addClass("unblur");
                        }
                    });

                    $("#edit-charge-code-submit").click(function (e) {
                        e.preventDefault();
                        $.ajax({
                            url: siteFolder + '/api/cc/' + $("#edit-charge-code").val(),
                            type: 'POST',
                            data: {
                                'cc': $("#edit-charge-code").val(),
                            },
                            success: function (response) {

                                if (response == "true") {
                                    $("body > *").removeClass("blur-all");
                                    sessionStorage.setItem('cc_popup_lastOpened', Date.now());
                                    $('.result').html("<div class='alert alert-success'>Valid Charge Code</div>");
                                    setTimeout(function () {
                                        $('#popup-izimodal').iziModal('close');
                                    }, 1500);
                                } else {
                                    $('.result').html("<div class='alert alert-danger'>Charge Code not valid.</div>");
                                }

                            }
                        });
                    });

                    if ($("body").hasClass('logged-in')) {
                        $('#popup-izimodal').iziModal('open', this);
                    }
                }//end if sessionStorage.getItem
            } //end if toggle
        } //end attach
    }; //end behavior

})(jQuery);