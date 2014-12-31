/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

(function ($, Drupal, window, document, undefined) {

Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    //Bug fix for label not displaying when using select or other on select options
    $(".select-or-other .form-type-radios").find("label:first-of-type").removeClass("element-invisible");

    //Web form toggling
    $(".webform-component--date-required, .webform-component--type-of-cake, .webform-component--flavour, .webform-component--message").hide();
    $('.webform-component--contact-options .order').click(function() {
      $(".webform-component--message").hide();
      $(".webform-component--date-required, .webform-component--type-of-cake, .webform-component--flavour").show();
    });
    $('.webform-component--contact-options .inquiry, .webform-component--contact-options .hello').click(function() {
      $(".webform-component--date-required, .webform-component--type-of-cake, .webform-component--flavour, .webform-component--confectionery, .webform-component--quantity, .webform-component--size-of-cake").hide();
      $(".webform-component--message").show();
    });
  }
};


})(jQuery, Drupal, this, this.document);
