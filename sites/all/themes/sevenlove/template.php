<?php
/**
 * Implements hook_form_alter().
 */
function sevenlove_form_alter(&$form, &$form_state, $form_id) {
  if (!empty($form['actions']) && $form['actions']['submit']) {
    $form['actions']['submit']['#attributes'] = array('class' => array('button'));
  }
}
