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

  }
};


})(jQuery, Drupal, this, this.document);
