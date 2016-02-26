<?php
/**
 * @file
 * flexslider_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function flexslider_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  return $permissions;
}
