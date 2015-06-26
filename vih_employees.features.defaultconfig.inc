<?php
/**
 * @file
 * vih_employees.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_employees_defaultconfig_features() {
  return array(
    'vih_employees' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_employees_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create employee_context content'.
  $permissions['create employee_context content'] = array(
    'name' => 'create employee_context content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any employee_context content'.
  $permissions['delete any employee_context content'] = array(
    'name' => 'delete any employee_context content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own employee_context content'.
  $permissions['delete own employee_context content'] = array(
    'name' => 'delete own employee_context content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any employee_context content'.
  $permissions['edit any employee_context content'] = array(
    'name' => 'edit any employee_context content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own employee_context content'.
  $permissions['edit own employee_context content'] = array(
    'name' => 'edit own employee_context content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
