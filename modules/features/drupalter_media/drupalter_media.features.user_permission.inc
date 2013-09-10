<?php
/**
 * @file
 * drupalter_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalter_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access assets overview'.
  $permissions['access assets overview'] = array(
    'name' => 'access assets overview',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer asset types'.
  $permissions['administer asset types'] = array(
    'name' => 'administer asset types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer assets'.
  $permissions['administer assets'] = array(
    'name' => 'administer assets',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type audio'.
  $permissions['create asset with type audio'] = array(
    'name' => 'create asset with type audio',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type fichier'.
  $permissions['create asset with type fichier'] = array(
    'name' => 'create asset with type fichier',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type image'.
  $permissions['create asset with type image'] = array(
    'name' => 'create asset with type image',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type video'.
  $permissions['create asset with type video'] = array(
    'name' => 'create asset with type video',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type audio'.
  $permissions['delete asset with type audio'] = array(
    'name' => 'delete asset with type audio',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type fichier'.
  $permissions['delete asset with type fichier'] = array(
    'name' => 'delete asset with type fichier',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type image'.
  $permissions['delete asset with type image'] = array(
    'name' => 'delete asset with type image',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type video'.
  $permissions['delete asset with type video'] = array(
    'name' => 'delete asset with type video',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type audio'.
  $permissions['edit asset with type audio'] = array(
    'name' => 'edit asset with type audio',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type fichier'.
  $permissions['edit asset with type fichier'] = array(
    'name' => 'edit asset with type fichier',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type image'.
  $permissions['edit asset with type image'] = array(
    'name' => 'edit asset with type image',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type video'.
  $permissions['edit asset with type video'] = array(
    'name' => 'edit asset with type video',
    'roles' => array(
      'Contributeur' => 'Contributeur',
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  return $permissions;
}
