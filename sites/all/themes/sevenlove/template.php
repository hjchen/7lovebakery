<?php
  /**
   * Implements hook_form_FORM_ID_alter() for webform_client_form_267().
   */
  function sevenlove_form_webform_client_form_267_alter(&$form, &$form_state, $form_id) {
    $form['actions']['submit']['#attributes']['class'][] = 'button';
  }
