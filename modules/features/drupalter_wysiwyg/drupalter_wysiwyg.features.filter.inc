<?php
/**
 * @file
 * drupalter_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function drupalter_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Wysiwyg.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'Wysiwyg',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <br> <a> <em> <strong> <blockquote> <code> <ul> <ol> <li>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'assets_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
