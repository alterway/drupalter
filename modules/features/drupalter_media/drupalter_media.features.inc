<?php
/**
 * @file
 * drupalter_media.features.inc
 */

/**
 * Implements hook_default_asset_type().
 */
function drupalter_media_default_asset_type() {
  $items = array();
  $items['fichier'] = entity_import('asset_type', '{
    "type" : "fichier",
    "name" : "Fichier",
    "icon" : "AddDocument.png",
    "description" : "",
    "help" : "",
    "weight" : "0",
    "locked" : "0",
    "uuid" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalter_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalter_media_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
