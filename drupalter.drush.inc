<?php

/**
 * @file
 * Features module drush integration.
 */

/**
 * Implements hook_drush_command().
 *
 * @return
 *   An associative array describing your command(s).
 *
 * @see drush_parse_command()
 */
function drupalter_drush_command() {
  $items = array();

  $items['features-update-some'] = array(
    'description' => "Update all the overriden features on your site.",
    'arguments' => array(
      'feature_exclude' => 'A space-delimited list of features to exclude from being updated.',
    ),
    'drupal dependencies' => array('features'),
    'aliases' => array('fu-some', 'fus'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function drupalter_drush_help($section) {
  switch ($section) {
    case 'drush:features-update-some':
      return dt("Update all the overriden feature son your site.");
  }
}

/**
 * Update all enabled features. Optionally pass in a list of features to
 * exclude from being updated.
 */
function drush_drupalter_features_update_some() {
  module_load_include('inc', 'features', 'features.export');
  $features_to_exclude = func_get_args();
  $features_to_update = array();
  $rebuild_states = array(FEATURES_OVERRIDDEN, FEATURES_NEEDS_REVIEW, FEATURES_REBUILDABLE);
  foreach (features_get_features(NULL, TRUE) as $module) {
    if ($module->status
        && !in_array($module->name, $features_to_exclude)
        && in_array(features_get_storage($module->name), $rebuild_states)) {
      $features_to_update[] = $module->name;
    }
  }

  drush_print(dt('The following modules will be updated: !modules', array('!modules' => implode(', ', $features_to_update))));
  if (drush_confirm(dt('Do you really want to continue?'))) {
    foreach ($features_to_update as $module_name) {
      drush_invoke_process(drush_sitealias_get_record('@self'), 'features-update', array($module_name));
    }
  }
  else {
    drush_print(dt('Aborting update.'));
  }
}