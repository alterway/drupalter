<?php

/**
* Implements hook_form_FORM_ID_alter().
*/
function drupalter_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  // TODO Add PHP timezone as default to the configuration form.
}


function drupalter_install_tasks() {
  $tasks['drupalter_revert_features'] = array(
    'display_name' => st('Revert features'),
    'display' => TRUE,
    'type' => 'normal',
  );
  return $tasks;
}


function drupalter_revert_features() {

  /*
   * This will revert overriten components of all enabled features.
   *
   * For some reason(s) (probably the order in which the modules are enabled, among others),
   * some feature components stay overriden after the feature has been activated.
   */
  features_revert();
}
