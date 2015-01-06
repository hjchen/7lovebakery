<?php
/**
 * @file
 * sevenlove_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function sevenlove_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Fondant cake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6c3fb689-a6eb-47dd-8593-1d996a1aa06a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'custom_cake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sugar sheet cupcake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '71edb180-233e-45f0-84a7-c3c33ab7e4cc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'custom_cupcake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Icing cake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '73b4a57b-7b5e-409d-b294-85cdb44d4d70',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'custom_cake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Butter cake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '7aa50d8f-cf76-4fa5-85e7-9298f21c657f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'standard_cake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Celebration cake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '887d4428-8a7f-4cde-961a-f66ddaef0948',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'standard_cake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Chiffon cake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'b91ea623-e04f-477a-bcba-dbfb8f43d291',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'standard_cake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fondant cupcake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e2886c8a-d183-44d6-80b1-aa848adf9e95',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'custom_cupcake',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sugar sheet cake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f20d690d-4183-4f42-a723-8edc0260c66f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'custom_cake',
    'metatags' => array(),
  );
  return $terms;
}
