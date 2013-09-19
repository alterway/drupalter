<?php
/**
 * @file
 * drupalter_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupalter_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/workbench
  $menu_links['management:admin/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My Workbench area',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'parent_path' => 'admin',
  );
  // Exported menu link: menu-administration:admin/content/assets
  $menu_links['menu-administration:admin/content/assets'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'admin/content/assets',
    'router_path' => 'admin/content/assets',
    'link_title' => 'Medias',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Medias');
  t('My Workbench');


  return $menu_links;
}
