<?php
/**
 * @file
 * sevenlove_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function sevenlove_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'Homepage of the site';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[site:name] - Custom cakes, cupcakes and confectioneries',
        ),
        'description' => array(
          'value' => 'I specialise in hand-made custom cakes, cupcakes and confectioneries. All my cakes are made to order and personalised to suit your special occasion.',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'multi_col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_stack' => NULL,
      'three_left' => NULL,
      'three_middle' => NULL,
      'three_right' => NULL,
      'centre_stack' => NULL,
      'two_left' => NULL,
      'two_right' => NULL,
      'bottom_stack' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4f641d6e-07c2-4408-be6f-5dbfd6458b84';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ffadaf4-3b66-4515-a4cc-2c20161b5d4b';
    $pane->panel = 'centre_stack';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ffadaf4-3b66-4515-a4cc-2c20161b5d4b';
    $display->content['new-7ffadaf4-3b66-4515-a4cc-2c20161b5d4b'] = $pane;
    $display->panels['centre_stack'][0] = 'new-7ffadaf4-3b66-4515-a4cc-2c20161b5d4b';
    $pane = new stdClass();
    $pane->pid = 'new-fbfe766b-f6ff-463b-8da6-af0cd69a462f';
    $pane->panel = 'three_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'cakes-cupcakes_hp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbfe766b-f6ff-463b-8da6-af0cd69a462f';
    $display->content['new-fbfe766b-f6ff-463b-8da6-af0cd69a462f'] = $pane;
    $display->panels['three_left'][0] = 'new-fbfe766b-f6ff-463b-8da6-af0cd69a462f';
    $pane = new stdClass();
    $pane->pid = 'new-f9618c96-d6e3-4d09-a558-97aa8f810535';
    $pane->panel = 'three_middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'cakes-cake_hp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f9618c96-d6e3-4d09-a558-97aa8f810535';
    $display->content['new-f9618c96-d6e3-4d09-a558-97aa8f810535'] = $pane;
    $display->panels['three_middle'][0] = 'new-f9618c96-d6e3-4d09-a558-97aa8f810535';
    $pane = new stdClass();
    $pane->pid = 'new-3c4387a8-5ee2-4816-863d-abf29c996e59';
    $pane->panel = 'three_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'cakes-confectionaries_hp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c4387a8-5ee2-4816-863d-abf29c996e59';
    $display->content['new-3c4387a8-5ee2-4816-863d-abf29c996e59'] = $pane;
    $display->panels['three_right'][0] = 'new-3c4387a8-5ee2-4816-863d-abf29c996e59';
    $pane = new stdClass();
    $pane->pid = 'new-be057d99-c3bb-4158-817f-4ddd7c939dc2';
    $pane->panel = 'top_stack';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be057d99-c3bb-4158-817f-4ddd7c939dc2';
    $display->content['new-be057d99-c3bb-4158-817f-4ddd7c939dc2'] = $pane;
    $display->panels['top_stack'][0] = 'new-be057d99-c3bb-4158-817f-4ddd7c939dc2';
    $pane = new stdClass();
    $pane->pid = 'new-9862d5d0-7788-47d7-9d91-22f0780d00c5';
    $pane->panel = 'top_stack';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9862d5d0-7788-47d7-9d91-22f0780d00c5';
    $display->content['new-9862d5d0-7788-47d7-9d91-22f0780d00c5'] = $pane;
    $display->panels['top_stack'][1] = 'new-9862d5d0-7788-47d7-9d91-22f0780d00c5';
    $pane = new stdClass();
    $pane->pid = 'new-ac00206b-fe72-42ad-a195-0a277bf5e928';
    $pane->panel = 'two_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'cakes-custom_cakes_hp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac00206b-fe72-42ad-a195-0a277bf5e928';
    $display->content['new-ac00206b-fe72-42ad-a195-0a277bf5e928'] = $pane;
    $display->panels['two_left'][0] = 'new-ac00206b-fe72-42ad-a195-0a277bf5e928';
    $pane = new stdClass();
    $pane->pid = 'new-3ffebc82-25cc-48cf-953b-3c81f1fd5bc0';
    $pane->panel = 'two_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'cakes-custom_cupcakes_hp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ffebc82-25cc-48cf-953b-3c81f1fd5bc0';
    $display->content['new-3ffebc82-25cc-48cf-953b-3c81f1fd5bc0'] = $pane;
    $display->panels['two_right'][0] = 'new-3ffebc82-25cc-48cf-953b-3c81f1fd5bc0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
