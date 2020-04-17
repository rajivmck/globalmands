<div id="popup-izimodal" style="display:none;">
<div class="result"></div>
<div class="popup-body">
    <?php print $variables['popup_body'];?>
</div>
    <?php
    $form = drupal_get_form("mck_cc_api_form");
    print render($form);
?>
    <div class="popup-footer">
        <?php print $variables['popup_footer']; ?>
    </div>
</div>

<div id="popup-izimodal-success" style="display:none;">
	<div class='popup-body'>
		User has been approved with charge code.
	</div>
</div>

<div id="popup-izimodal-disapproved" style="display:none;">
    <div class='popup-body'>
        User has been disapproved with charge code.
    </div>
</div>