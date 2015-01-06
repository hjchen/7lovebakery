<?php
/**
 * @file
 * sevenlove_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sevenlove_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function sevenlove_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: cake.
  $styles['cake'] = array(
    'name' => 'cake',
    'label' => 'Full (500)',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage.
  $styles['homepage'] = array(
    'name' => 'homepage',
    'label' => 'Homepage (480x480)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: listing.
  $styles['listing'] = array(
    'name' => 'listing',
    'label' => 'Listing (220x220)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function sevenlove_content_types_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('For the main banner image displayed on the top section of the page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'confectionery' => array(
      'name' => t('Confectionery'),
      'base' => 'node_content',
      'description' => t('Used for confectioneries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'custom_cake' => array(
      'name' => t('Custom cake'),
      'base' => 'node_content',
      'description' => t('Used for custom cakes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'custom_cupcake' => array(
      'name' => t('Custom cupcake'),
      'base' => 'node_content',
      'description' => t('Used for custom cupcakes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'standard_cake' => array(
      'name' => t('Standard cake'),
      'base' => 'node_content',
      'description' => t('Used for standard cakes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'standard_cupcake' => array(
      'name' => t('Standard cupcake'),
      'base' => 'node_content',
      'description' => t('Used for standard cupcakes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
