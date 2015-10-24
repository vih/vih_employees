<?php
/**
 * @file
 * vih_employees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_employees_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_employees_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_employees_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('Employee'),
      'base' => 'node_content',
      'description' => t('Use <em>employee</em> to describe the employee of any sort.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'employee_context' => array(
      'name' => t('Employee profile'),
      'base' => 'node_content',
      'description' => t('Use <em>employee profile</em> to showcase <em>employee</em> in a certain a certain context, e.g. teachers which has special <em>subjects</em> or is a course leader.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
