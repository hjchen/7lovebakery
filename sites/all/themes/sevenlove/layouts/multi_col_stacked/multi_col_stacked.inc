<?php
/**
 * @file   bricks_25_75_stacked.inc
 * @author António P. P. Almeida <appa@perusio.net>
 * @date   Fri Dec 17 05:00:37 2010
 *
 * @brief  Panels plugin for the 25/75 stacked layout.
 *
 *
 */

// Plugin definition.
$plugin = array(
  'title' => t('Multi column stacked'),
  'category' => t('Columns: 3'),
  'icon' => 'multi_col_stacked.png',
  'theme' => 'multi_col_stacked',
  'css' => 'multi_col_stacked.css',
  'regions' => array(
    'top_stack' => t('Top stack'),
    'three_left' => t('Three left'),
    'three_middle' => t('Three middle'),
    'three_right' => t('Three right'),
    'centre_stack' => t('Centre stack'),
    'two_left' => t('Two left'),
    'two_right' => t('Two right'),
    'bottom_stack' => t('Bottom stack'),
  ),
);
