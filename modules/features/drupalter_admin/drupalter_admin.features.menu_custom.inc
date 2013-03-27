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

  // Exported menu: menu-administration.
  $menus['menu-administration'] = array(
    'menu_name' => 'menu-administration',
    'title' => 'Trouver un contenu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Trouver un contenu');


  return $menus;
}
