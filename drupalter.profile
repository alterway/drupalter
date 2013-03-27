<?php

/**
* Implements hook_form_FORM_ID_alter().
*/
function drupalter_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}


function drupalter_install_tasks($install_state) {
  $needs_translations = count($install_state['locales']) > 1 && !empty($install_state['parameters']['locale']) && $install_state['parameters']['locale'] != 'en';
  $tasks['drupalter_import_translations'] = array(
    'display_name' => st('Set up translations'),
    'display' => $needs_translations,
    'run' => $needs_translations ? INSTALL_TASK_RUN_IF_NOT_COMPLETED : INSTALL_TASK_SKIP,
    'type' => 'batch',
  );

  $tasks['drupalter_revert_features'] = array(
    'display_name' => st('Revert features'),
    'display' => TRUE,
    'type' => 'normal',
  );

  $tasks['drupalter_configuration_finish'] = array(
    'display_name' => st('Finish Drupalter configuration'),
    'display' => TRUE,
    'type' => 'normal',
  );


  return $tasks;
}


/**
 * Implement hook_install_tasks_alter().
 */
function drupalter_install_tasks_alter(&$tasks, $install_state) {
// Remove core steps for translation imports.
  unset($tasks['install_import_locales']);
  unset($tasks['install_import_locales_remaining']);
}


function drupalter_revert_features() {

  /*
   * This will revert overriden components of all enabled features.
   *
   * For some reason(s) (probably the order in which the modules are enabled, among others),
   * some feature components stay overriden after the feature has been activated.
   */
  features_revert();
}


/**
 * Installation step callback.
 *
 * @param $install_state
 * An array of information about the current installation state.
 */
function drupalter_import_translations(&$install_state) {
  // Enable installation language as default site language.
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  $install_locale = $install_state['parameters']['locale'];
  locale_add_language($install_locale, NULL, NULL, NULL, '', NULL, 1, TRUE);

  // Build batch with l10n_update module.
  $history = l10n_update_get_history();
  module_load_include('check.inc', 'l10n_update');
  $available = l10n_update_available_releases();
  $updates = l10n_update_build_updates($history, $available);

  module_load_include('batch.inc', 'l10n_update');
  $updates = _l10n_update_prepare_updates($updates, NULL, array());
  $batch = l10n_update_batch_multiple($updates, LOCALE_IMPORT_KEEP);
  return $batch;
}


function drupalter_configuration_finish(&$install_state) {

  /*
   * Dashboard
   *
   * Put node_recent and media block in dashboard for the admin theme.
   */
  $admin_theme = variable_get('admin_theme', 'aw_admin');
  $query = db_update('block')
    ->fields(array('region' => 'dashboard_main', 'status' => 1));
  $query->condition('theme', $admin_theme)
    ->condition('module', 'node')
    ->condition('delta', "recent");
  $query->execute();

  if ($hash = array_search('asset_references-derniers_medias', variable_get('views_block_hashes', array()))) {
    $query = db_update('block')
      ->fields(array('region' => 'dashboard_sidebar', 'status' => 1));
    $query->condition('theme', $admin_theme)
      ->condition('module', 'views')
      ->condition('delta', $hash);
    $query->execute();
  }


  /*
   * Login Destination
   *
   * Every connected user is redirected to the dashboard on login.
   */
  $roles = array();
  foreach (user_roles() as $rid => $name) {
    // Add all webmaster and admin roles.
    if ($rid > DRUPAL_ANONYMOUS_RID) {
      $roles[$rid] = $rid;
    }
  }

  $login_destination_rule = array(
    'destination_type' => 0,
    'destination' => "admin/dashboard",
    'triggers' => serialize(array('login' => 'login')),
    'pages_type' => 0,
    'roles' => serialize($roles),
    'weight' => 0,
    'pages' => "",
  );
  drupal_write_record('login_destination', $login_destination_rule);
}
