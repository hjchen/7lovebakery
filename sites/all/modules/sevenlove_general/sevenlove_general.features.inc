<?php
/**
 * @file
 * sevenlove_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sevenlove_general_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
