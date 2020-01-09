// Read a page's GET URL variables and return them as an associative array.
function getUrlVars() {
    var vars = [], hash;
    var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('&');
    for(var i = 0; i < hashes.length; i++) {
    hash = hashes[i].split('=');
    vars.push(hash[0]);
    vars[hash[0]] = hash[1];
    }
    return vars;
}


function check_approved(){
    $approved = getUrlVars()['approval'];
    if($approved == "true"){
        return true;
    } else {
        return false;
    }
}


(function($) {
    Drupal.behaviors.mck_cc_api = {
        attach: function (context, settings) {
            //get the nid attahed to the body class
            //if the savedNID is in the body tag, we can disable the popup all together.
            var savedNID = settings.mck_cc_api.savedNID;
            $checkNID = "";

            $pageNID = $("[class~='page-node-']").attr('class');
            if($pageNID)
                $checkNID = $pageNID.indexOf(savedNID);

            if($checkNID > -1) {
                return false;
            }

            console.log($checkNID);

            var toggle = settings.mck_cc_api.toggle;
            $approved = check_approved();

            if(toggle && !$approved) {
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
                        $(".spinner").fadeIn();
                        e.preventDefault();
                        $(this).prop("disabled","disabled");
                        $(this).val('');
                        $.ajax({
                            url: siteFolder + '/api/cc/' + $("#edit-charge-code").val(),
                            type: 'POST',
                            data: {
                                'cc': $("#edit-charge-code").val(),
                                'ed_name': $("#edit-charge-code-ed-name").val(),
                            },
                            success: function (response) {
                                $(".spinner").fadeOut();
                                $("#edit-charge-code-submit").prop("disabled",false);
                                $("#edit-charge-code-submit").val('Validate');

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

                            },
                            error: function(jqXHR, textStatus, errorThrown){
                                $('.result').html("<div class='alert alert-danger'>Charge Code not valid.</div>");
                                $(".spinner").fadeOut();
                                $("#edit-charge-code-submit").prop("disabled",false);
                                $("#edit-charge-code-submit").val('Validate');

                            }

                        });
                    });

                    if ($("body").hasClass('logged-in')) {
                        $('#popup-izimodal').iziModal('open', this);
                    }
                }//end if sessionStorage.getItem
            } else {
                $("#popup-izimodal-success").iziModal({
                        title: title, //Modal title
                        subtitle: subtitle, //Modal subtitle
                        fullscreen: false, //Icon to expand modal to fullscreen
                        headerColor: 'rgb(51, 76, 123)', //Color of modal header. Hexa colors allowed.
                        overlayColor: 'rgba(0, 0, 0, 0.4)', //Color of overlay behind the modal
                        iconColor: '',
                        iconClass: 'icon-chat',
                        closeOnEscape: true,
                        show: true,
                        focusInput: true,
                        bodyOverflow: true,
                        overlayClose: false,
                        closeButton: true,
                        transitionOut: 'fadeOutDown',
                        transitionIn: 'fadeInUp',
                        timeout: '4000',
                        onOpening: function() {
                            $("body > *").not("#popup-izimodal-success").addClass("blur-all");
                            $("#popup-izimodal").addClass("unblur");
                        }
                    });
                $('#popup-izimodal-success').iziModal('open', this);
                $()
            } //end if toggle

        } //end attach
    }; //end behavior

})(jQuery);
