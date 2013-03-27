<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function aw_admin_form_node_form_alter(&$form, &$form_state) {

  if (strpos($form['#id'], 'node-form') === FALSE) {
    return;
  }

  // Take some fieldsets out of the vertical tabs.
  // They will be put in the form sidebar.
  // @see rf_admin_preprocess_form_node().
  if (isset($form['options'])) {
    $form['options']['#collapsible'] = FALSE;
    $form['options']['#group'] = FALSE;
  }

  if (isset($form['revision_information'])) {
    $form['revision_information']['#group'] = FALSE;
    $form['revision_information']['#collapsible'] = FALSE;
  }
}


function aw_admin_theme_registry_alter(&$items) {
  if (isset($items['node_form'])) {
    $items['node_form']['preprocess functions'][] = 'aw_admin_preprocess_form_node';
  }
}


function aw_admin_preprocess_page(&$vars) {

  // Process local tasks. Only do this processing if the current theme is
  // indeed Rubik. Subthemes must reimplement this call.
  // @see rubik:template.php:rubik_preprocess_page
  global $theme;
  if ($theme === 'aw_admin') {
    _rubik_local_tasks($vars);
  }
}


/**
 * Preprocessor for theme('node_form').
 *
 * @see rubik:template.php
 */
function aw_admin_preprocess_form_node(&$vars) {

  // Put form elements in the sidebar
  $to_sidebar = array('options', 'revision_information');
  $weight = 0;
  foreach ($to_sidebar as $element) {
    if (isset($vars['form'][$element])) {
      $vars['sidebar'][$element] = $vars['form'][$element];
      unset($vars['form'][$element]);
      $vars['sidebar'][$element]['#weight'] = $weight++;
    }
  }
}


