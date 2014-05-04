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

  // Exported permission: 'create employee content'.
  $permissions['create employee content'] = array(
    'name' => 'create employee content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

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

  // Exported permission: 'delete any employee content'.
  $permissions['delete any employee content'] = array(
    'name' => 'delete any employee content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
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

  // Exported permission: 'delete own employee content'.
  $permissions['delete own employee content'] = array(
    'name' => 'delete own employee content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
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

  // Exported permission: 'delete terms in employee_type'.
  $permissions['delete terms in employee_type'] = array(
    'name' => 'delete terms in employee_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any employee content'.
  $permissions['edit any employee content'] = array(
    'name' => 'edit any employee content',
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

  // Exported permission: 'edit own employee content'.
  $permissions['edit own employee content'] = array(
    'name' => 'edit own employee content',
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

  // Exported permission: 'edit terms in employee_type'.
  $permissions['edit terms in employee_type'] = array(
    'name' => 'edit terms in employee_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
