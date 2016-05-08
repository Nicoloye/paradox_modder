<?php
/**
 * @file
 * eu4_ct_provinces.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eu4_ct_provinces_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buildings|node|province|form';
  $field_group->group_name = 'group_buildings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Buildings',
    'weight' => '40',
    'children' => array(
      0 => 'field_fort1',
      1 => 'field_fort2',
      2 => 'field_fort3',
      3 => 'field_temple',
      4 => 'field_workshop',
      5 => 'field_marketplace',
      6 => 'field_university',
      7 => 'field_shipyard',
      8 => 'field_courthouse',
      9 => 'field_tax_assessor',
      10 => 'field_trade_depot',
      11 => 'field_dock',
      12 => 'field_constable',
      13 => 'field_textile',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-buildings field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_buildings|node|province|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_colony|node|province|form';
  $field_group->group_name = 'group_colony';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Colony',
    'weight' => '41',
    'children' => array(
      0 => 'field_native_size',
      1 => 'field_native_ferocity',
      2 => 'field_native_hostileness',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-colony field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_colony|node|province|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_economy|node|province|form';
  $field_group->group_name = 'group_economy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Economy',
    'weight' => '38',
    'children' => array(
      0 => 'field_base_tax',
      1 => 'field_trade_goods',
      2 => 'field_trade_winds',
      3 => 'field_trade_winds_category',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-economy field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_economy|node|province|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal_troubles|node|province|form';
  $field_group->group_name = 'group_internal_troubles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Internal troubles',
    'weight' => '39',
    'children' => array(
      0 => 'field_add_local_autonomy',
      1 => 'field_extra_cost',
      2 => 'field_revolt_risk',
      3 => 'field_unrest',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-internal-troubles field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_internal_troubles|node|province|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_politic|node|province|form';
  $field_group->group_name = 'group_politic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Politic',
    'weight' => '36',
    'children' => array(
      0 => 'field_add_core',
      1 => 'field_owner',
      2 => 'field_controller',
      3 => 'field_hre',
      4 => 'field_discovered_by',
      5 => 'field_province_category',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-politic field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_politic|node|province|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_population|node|province|form';
  $field_group->group_name = 'group_population';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Population',
    'weight' => '37',
    'children' => array(
      0 => 'field_culture',
      1 => 'field_religion',
      2 => 'field_manpower',
      3 => 'field_province_capital',
      4 => 'field_is_city',
      5 => 'field_citysize',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-population field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_population|node|province|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|node|province|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'province';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_buildings',
      1 => 'group_colony',
      2 => 'group_internal_troubles',
      3 => 'group_economy',
      4 => 'group_population',
      5 => 'group_politic',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_tabs|node|province|form'] = $field_group;

  return $export;
}
