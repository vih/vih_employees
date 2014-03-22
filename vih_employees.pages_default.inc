<?php
/**
 * @file
 * vih_employees.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_employees_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Employee',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'employee' => 'employee',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'picture',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Indhold',
        'width' => '49.00925881259322',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'information',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'picture' => array(
        'type' => 'region',
        'title' => 'Picture',
        'width' => '50.99074118740678',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'information' => array(
        'type' => 'region',
        'title' => 'Information',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => NULL,
      'picture' => NULL,
      'information' => NULL,
      'top' => array(),
      'right' => NULL,
      'left' => NULL,
      'bottom' => NULL,
    ),
    'style' => 'stylizer',
    'top' => array(
      'style' => 'stylizer',
    ),
    'left' => array(
      'style' => 'default',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'bottom' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '778a17ba-57e6-4025-9ba8-99b853a1b020';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d959886a-4a9c-4078-acf0-254e30032ed4';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Kvalifikationer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd959886a-4a9c-4078-acf0-254e30032ed4';
    $display->content['new-d959886a-4a9c-4078-acf0-254e30032ed4'] = $pane;
    $display->panels['bottom'][0] = 'new-d959886a-4a9c-4078-acf0-254e30032ed4';
    $pane = new stdClass();
    $pane->pid = 'new-41f7b41c-ab58-451e-9ed3-d5b9d493f3b0';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'subjects-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Underviser i',
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '41f7b41c-ab58-451e-9ed3-d5b9d493f3b0';
    $display->content['new-41f7b41c-ab58-451e-9ed3-d5b9d493f3b0'] = $pane;
    $display->panels['bottom'][1] = 'new-41f7b41c-ab58-451e-9ed3-d5b9d493f3b0';
    $pane = new stdClass();
    $pane->pid = 'new-3f34e8cb-1d76-40f7-9fcb-701841aed29b';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'employees_context-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => '',
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => '',
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'vih_box_highlight',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f34e8cb-1d76-40f7-9fcb-701841aed29b';
    $display->content['new-3f34e8cb-1d76-40f7-9fcb-701841aed29b'] = $pane;
    $display->panels['bottom'][2] = 'new-3f34e8cb-1d76-40f7-9fcb-701841aed29b';
    $pane = new stdClass();
    $pane->pid = 'new-4afbf3d0-0a43-43ff-8e59-a5f9a77cac64';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'short_courses';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '50',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4afbf3d0-0a43-43ff-8e59-a5f9a77cac64';
    $display->content['new-4afbf3d0-0a43-43ff-8e59-a5f9a77cac64'] = $pane;
    $display->panels['bottom'][3] = 'new-4afbf3d0-0a43-43ff-8e59-a5f9a77cac64';
    $pane = new stdClass();
    $pane->pid = 'new-ab25c96a-5615-41a6-af1c-f2fbf9f68af4';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = 'ab25c96a-5615-41a6-af1c-f2fbf9f68af4';
    $display->content['new-ab25c96a-5615-41a6-af1c-f2fbf9f68af4'] = $pane;
    $display->panels['left'][0] = 'new-ab25c96a-5615-41a6-af1c-f2fbf9f68af4';
    $pane = new stdClass();
    $pane->pid = 'new-3ec0285f-40a3-4ec3-b8e7-60fa5c696940';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_vih_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = '3ec0285f-40a3-4ec3-b8e7-60fa5c696940';
    $display->content['new-3ec0285f-40a3-4ec3-b8e7-60fa5c696940'] = $pane;
    $display->panels['left'][1] = 'new-3ec0285f-40a3-4ec3-b8e7-60fa5c696940';
    $pane = new stdClass();
    $pane->pid = 'new-d51e5452-8d58-493a-822a-94e5c495c80a';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'sidepicture',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd51e5452-8d58-493a-822a-94e5c495c80a';
    $display->content['new-d51e5452-8d58-493a-822a-94e5c495c80a'] = $pane;
    $display->panels['right'][0] = 'new-d51e5452-8d58-493a-822a-94e5c495c80a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
