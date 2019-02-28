(function($) {



// Drupal.behaviors.UltimaTheme = {
//     attach: function (context, settings) {
//       $('input#edit-field-mine-und').change(function() {
//         if($(this).is(':checked')) {
//           alert(Drupal.t('Checked'));
//         }
//         else {
//           alert(Drupal.t('Not Checked'));
//         }
//       });
//     };
//   };

// Define jRespond Media queries.
var jRes = jRespond([
	{
		label: 'mobile',
		enter: 0,
		exit: 480
	},{
		label: 'tablet',
		enter: 481,
		exit: 979
	},{
		label: 'desktop',
		enter: 980,
		exit: 9999
	}
]);

// Modify the Search field for module filter.
Drupal.behaviors.adminimal_module_filter_box = {
  attach: function (context, settings) {
    //Add default hint value using the HTML5 placeholder attribute.
    $('input#edit-module-filter-name').attr( "placeholder", Drupal.t('Search') );
  }
};

// Fix some krumo styling.
Drupal.behaviors.krumo_remove_class = {
  attach: function (context, settings) {
  	// Find status messages that has krumo div inside them, and change the classes.
    $('#console .messages.status').has("div.krumo-root").removeClass().addClass( "krumo-wrapper" );
  }
};

// Add media query classes to the body tag.
Drupal.behaviors.adminimal_media_queries = {
	attach: function (context, settings) {

		
		//For Alert Team checkbox.
		$('input#edit-field-first-alert-part-und').change(function() {
		        if(jQuery(this).is(":checked")) {
		            $('fieldset.first-alert-group').slideDown('slow');;
		        }
		        else {
		        	$('fieldset.first-alert-group').slideUp('slow');;
		        }
		        //$('#textbox1').val($(this).is(':checked'));        
		});

		// For Resources

			//New Entry
		$('.page-node-add-resources #edit-field-resource-category-und input, .node-type-resources #edit-field-resource-category-und input').change(function() {

			//alert($(this).val());
			if($(this).val() === "Videos") {
				$('#edit-field-video-resource').slideDown('slow');
				$('#edit-field-resource').slideUp('slow');
				$('.field-name-field-resource-url').slideUp('slow');

				$('.field-name-field-featured-video-for-resourc').slideDown('slow');
				$('.field-name-field-featured-video-for-lop-too').slideDown('slow');
				$('.field-name-field-video-url').slideDown('slow');
			}
			else {
				$('#edit-field-video-resource').slideUp('slow');
				$('#edit-field-resource').slideDown('slow');
				$('.field-name-field-resource-url').slideDown('slow');

				$('.field-name-field-featured-video-for-resourc').slideUp('slow');
				$('.field-name-field-featured-video-for-lop-too').slideUp('slow');
				$('.field-name-field-video-url').slideUp('slow');
			}
		});
		
		// For Case Studies

		$('input#edit-field-make-featured-und').change(function() {
			
			if ($('body').hasClass('page-node-add-expert-profile')) {
				
				//Experts
				if(jQuery(this).is(":checked")) {
		            $('div.field-name-field-featured-image-174-x-222-').slideDown('slow');
		        }
		        else {
		        	 $('div.field-name-field-featured-image-174-x-222-').slideUp('slow');
		        }

			}
			else {
				//Case Studies
				if(jQuery(this).is(":checked")) {
		            $('div.field-name-field-featured-image').slideDown('slow');
		        }
		        else {
		        	 $('div.field-name-field-featured-image').slideUp('slow');
		        }

			}
			
		});


		


		// $('input #edit-field-make-featured-und').change(function() {
		// 	alert("asdasd");
			
		// });


		// $('.page-node-add-resources #edit-field-resource-category-und input').is(":checked") {
		// 	$('#edit-field-video-resource').slideDown('slow');
		// 	$('#edit-field-resource').slideDown('slow');
		// });


		jRes.addFunc([
			{
				breakpoint: 'mobile',
					enter: function() {
						$( "body" ).addClass( "mq-mobile" );
					},
					exit: function() {
						$( "body" ).removeClass( "mq-mobile" );
					}
			},{
				breakpoint: 'tablet',
					enter: function() {
						$( "body" ).addClass( "mq-tablet" );
					},
					exit: function() {
						$( "body" ).removeClass( "mq-tablet" );
					}
			},{
				breakpoint: 'desktop',
					enter: function() {
						$( "body" ).addClass( "mq-desktop" );
					},
					exit: function() {
						$( "body" ).removeClass( "mq-desktop" );
					}
			}
		]);
	}
};

// Move the active primary tab on mobile to be displayed last. 
Drupal.behaviors.adminimal_move_active_primary_tab = {
	attach: function (context, settings) {
  	// Add primary tabs class to the branding div for the bottom border.
    $('#branding').has("ul.tabs.primary").addClass( "has-primary-tabs" );

		// register enter and exit functions for a single breakpoint
		jRes.addFunc({
			breakpoint: 'mobile',
				enter: function() {
					$( "ul.tabs.primary li.active" ).clone().appendTo( "ul.tabs.primary" ).removeClass( "active" ).addClass( "current" );
					$( "ul.tabs.primary li.active" ).css("display", "none");
				},
				exit: function() {
					$( "ul.tabs.primary li.active" ).css("display", "table");
					$( "ul.tabs.primary li.current" ).css("display", "none");
				}
		});
	}
};

})(jQuery);
