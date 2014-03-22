<?php
/**
 * @file
 * vih_employees.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vih_employees_taxonomy_default_vocabularies() {
  return array(
    'employee_type' => array(
      'name' => 'Employee type',
      'machine_name' => 'employee_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
