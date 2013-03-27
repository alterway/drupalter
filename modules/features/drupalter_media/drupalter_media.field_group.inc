<?php
/**
 * @file
 * drupalter_media.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function drupalter_media_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_copyright|asset|rf_aod|form';
  $field_group->group_name = 'group_copyright';
  $field_group->entity_type = 'asset';
  $field_group->bundle = 'rf_aod';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Copyright',
    'weight' => '11',
    'children' => array(
      0 => 'field_usage_limit',
      1 => 'field_author',
      2 => 'field_limit_action',
      3 => 'field_rights',
      4 => 'field_copyright',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_copyright|asset|rf_aod|form'] = $field_group;

  return $export;
}
