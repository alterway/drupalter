<?php
/**
 * @file
 * drupalter_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function drupalter_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-administration.
  $menus['menu-administration'] = array(
    'menu_name' => 'menu-administration',
    'title' => 'Find contents',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Find contents');
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');


  return $menus;
}
