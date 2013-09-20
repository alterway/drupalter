<?php
/**
 * @file
 * drupalter_page.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function drupalter_page_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:simple_page.
  $config['node:simple_page'] = array(
    'instance' => 'node:simple_page',
    'config' => array(),
  );

  return $config;
}
