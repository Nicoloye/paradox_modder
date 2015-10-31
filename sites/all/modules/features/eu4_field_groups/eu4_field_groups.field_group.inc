<?php
/**
 * @file
 * eu4_field_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eu4_field_groups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ai_will_do|node|government|eu4_governments_common';
  $field_group->group_name = 'group_ai_will_do';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'government';
  $field_group->mode = 'eu4_governments_common';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'AI will do',
    'weight' => '24',
    'children' => array(
      0 => 'field_factor',
      1 => 'field_modifier',
    ),
    'format_type' => 'eu4_group_simple',
    'format_settings' => array(
      'label' => 'AI will do',
      'instance_settings' => array(
        'group_opening' => 'ai_will_do = {',
        'group_closure' => '}',
        'add_line' => 1,
        'indent' => '1',
      ),
    ),
  );
  $export['group_ai_will_do|node|government|eu4_governments_common'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ai_will_do|node|government|form';
  $field_group->group_name = 'group_ai_will_do';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'government';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'AI will do',
    'weight' => '25',
    'children' => array(
      0 => 'field_factor',
      1 => 'field_modifier',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'AI will do',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ai-will-do field-group-fieldset',
        'description' => 'Will only check if it\'s valid,and won\'t break unions or switch to republic from monarchy, nor check to convert to something earlier in the file.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ai_will_do|node|government|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modifier|node|faction|form';
  $field_group->group_name = 'group_modifier';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faction';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modifier',
    'weight' => '3',
    'children' => array(
      0 => 'field_land_forcelimit_modifier',
      1 => 'field_manpower_recovery_speed',
      2 => 'field_unjustified_demands',
      3 => 'field_discipline',
      4 => 'field_war_exhaustion',
      5 => 'field_global_trade_power',
      6 => 'field_diplomatic_upkeep',
      7 => 'field_global_trade_income_modif',
      8 => 'field_advisor_cost',
      9 => 'field_diplomatic_reputation',
      10 => 'field_build_cost',
      11 => 'field_global_tax_modifier',
      12 => 'field_advisor_pool',
      13 => 'field_heir_chance',
      14 => 'field_religious_unity',
      15 => 'field_land_morale',
      16 => 'field_global_foreign_trade_power',
      17 => 'field_land_maintenance_modifier',
      18 => 'field_naval_maintenance_modifier',
      19 => 'field_global_trade_goods_size',
      20 => 'field_global_manpower_modifier',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-modifier field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_modifier|node|faction|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit_colors|node|country|form';
  $field_group->group_name = 'group_unit_colors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unit colors',
    'weight' => '28',
    'children' => array(
      0 => 'field_color1',
      1 => 'field_color2',
      2 => 'field_color3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-unit-colors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_unit_colors|node|country|form'] = $field_group;

  return $export;
}
