<?php

/**
 * Implements hook_theme_registry_alter().
 */
function aw_admin_theme_registry_alter(&$items) {
  if (isset($items['node_form'])) {
    $items['node_form']['preprocess functions'][] = 'aw_admin_preprocess_form_node';
  }
}


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
  $form['#aw-sidebar'] = array(
    'options',
    'revision_information',
    'scheduler_settings',
  );

  foreach ($form['#aw-sidebar'] as $group) {
    if (isset($form[$group])) {
      $form[$group]['#group'] = $form[$group]['#collapsible'] = FALSE;
    }
  }
}


/**
 * Implements hook_preprocess_token_tree().
 */
function rf_admin_preprocess_token_tree(&$variables) {
  // When a lot of entity reference fields are present, the theme_token_tree takes
  // up a LOT of memory, causing either PHP or the MySQL server to crash.
  // This limits the recursions in the node threads.
  // @see https://drupal.org/node/1058912
  $variables['recursion_limit'] = 2;
}


/**
 * Preprocessor for theme('node_form').
 *
 * @see rubik:template.php
 */
function aw_admin_preprocess_form_node(&$vars) {

  if (array_key_exists('form', $vars)) {
    $weight = 0;
    if (is_array($vars['form']['#aw-sidebar'])) {
      foreach ($vars['form']['#aw-sidebar'] as $element) {
        if (isset($vars['form'][$element])) {
          $vars['sidebar'][$element] = $vars['form'][$element];
          unset($vars['form'][$element]);
          $vars['sidebar'][$element]['#weight'] = $weight++;
        }
      }
    }
  }
}


/**
 * Preprocessor for theme('textfield').
 */
function rf_admin_preprocess_container(&$vars) {
  // Workaround for : Fatal error: [] operator not supported for strings in includes/form.inc on line 3248
  // linked to http://drupal.org/node/1248650
  if (!isset($vars['element']['#attributes']['class'])
      || !is_array($vars['element']['#attributes']['class'])
  ) {
    $vars['element']['#attributes']['class'] = array();
  }
}