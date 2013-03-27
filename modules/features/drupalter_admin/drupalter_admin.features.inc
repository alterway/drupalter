<?php
/**
 * @file
 * drupalter_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalter_admin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "password_policy" && $api == "default_password_policy_role") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
