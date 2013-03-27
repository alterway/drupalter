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

  // Exported menu link: menu-administration:admin/content
  $menu_links['menu-administration:admin/content'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Trouver un contenu',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-administration:admin/content/assets
  $menu_links['menu-administration:admin/content/assets'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'admin/content/assets',
    'router_path' => 'admin/content/assets',
    'link_title' => 'Médiathèque',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-administration:admin/dashboard
  $menu_links['menu-administration:admin/dashboard'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Tableau de bord',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Médiathèque');
  t('Tableau de bord');
  t('Trouver un contenu');


  return $menu_links;
}
