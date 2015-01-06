<?php
/**
 * @file
 * sevenlove_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function sevenlove_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'cake_importer-image-rewrite';
  $feeds_tamper->importer = 'cake_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://images/cakes/[image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['cake_importer-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'confectionery_importer-image-rewrite';
  $feeds_tamper->importer = 'confectionery_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://images/cakes/[image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['confectionery_importer-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'custom_cupcake_importer-image-rewrite';
  $feeds_tamper->importer = 'custom_cupcake_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://images/cakes/[image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['custom_cupcake_importer-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'standard_cake_importer-image-rewrite';
  $feeds_tamper->importer = 'standard_cake_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://images/cakes/[image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['standard_cake_importer-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'standard_cupcake_importer-image-rewrite';
  $feeds_tamper->importer = 'standard_cupcake_importer';
  $feeds_tamper->source = 'Image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://images/cakes/[image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['standard_cupcake_importer-image-rewrite'] = $feeds_tamper;

  return $export;
}
