<?php
/**
 * @file
 * drupalter_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalter_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalter_page_node_info() {
  $items = array(
    'simple_page' => array(
      'name' => t('Simple page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
