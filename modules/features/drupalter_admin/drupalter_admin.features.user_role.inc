<?php
/**
 * @file
 * drupalter_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalter_admin_user_default_roles() {
  $roles = array();

  // Exported role: Contributeur.
  $roles['Contributeur'] = array(
    'name' => 'Contributeur',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
