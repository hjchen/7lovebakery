<?php
/**
 * @file
 * sevenlove_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sevenlove_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-site_copyright'] = array(
    'cache' => -1,
    'css_class' => 'block-copyright',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'site_copyright',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'sevenlove' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'sevenlove',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-site_footer'] = array(
    'cache' => -1,
    'css_class' => 'block-site-footer',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'site_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'sevenlove' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'sevenlove',
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-social_media'] = array(
    'cache' => -1,
    'css_class' => 'block-social-media',
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'social_media',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'sevenlove' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'sevenlove',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'sevenlove' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'sevenlove',
        'weight' => -9,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'sevenlove' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'sevenlove',
        'weight' => -8,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
