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
      'description' => t('Description of the employee.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'employee_context' => array(
      'name' => t('Underviserprofil'),
      'base' => 'node_content',
      'description' => t('Bruges til ansatte som skal vises i en bestemt sammenhæng på hjemmesiden, fx lærere der underviser i specielle fag eller er kursusledere.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
