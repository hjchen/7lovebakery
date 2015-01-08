<?php
/**
 * @file
 * sevenlove_general.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function sevenlove_general_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name] - Custom cakes, cupcakes and confectioneries',
      ),
      'description' => array(
        'value' => 'I specialise in hand-made custom cakes, cupcakes and confectioneries. All my cakes are made to order and personalised to suit your special occasion.',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'activity',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'og:image' => array(
        'value' => 'sites/all/themes/sevenlove/logo.png',
      ),
      'og:image:url' => array(
        'value' => 'sites/all/themes/sevenlove/logo.png',
      ),
    ),
  );

  // Exported Metatag config instance: view.
  $config['view'] = array(
    'instance' => 'view',
    'config' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
      ),
      'canonical' => array(
        'value' => '[view:url]',
      ),
    ),
  );

  return $config;
}
