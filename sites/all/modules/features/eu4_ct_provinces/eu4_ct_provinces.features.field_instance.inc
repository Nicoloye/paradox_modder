<?php
/**
 * @file
 * eu4_ct_provinces.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eu4_ct_provinces_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_province_names-field_province_country'.
  $field_instances['field_collection_item-field_province_names-field_province_country'] = array(
    'bundle' => 'field_province_names',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_province_country',
    'label' => 'Province country',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_province_names-field_province_culture'.
  $field_instances['field_collection_item-field_province_names-field_province_culture'] = array(
    'bundle' => 'field_province_names',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_province_culture',
    'label' => 'Province culture',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_province_names-field_province_language_switch'.
  $field_instances['field_collection_item-field_province_names-field_province_language_switch'] = array(
    'bundle' => 'field_province_names',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_province_language_switch',
    'label' => 'Province language switch',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_province_names-field_province_name'.
  $field_instances['field_collection_item-field_province_names-field_province_name'] = array(
    'bundle' => 'field_province_names',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_province_name',
    'label' => 'Province name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-province-field_add_core'.
  $field_instances['node-province-field_add_core'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_code',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_add_core',
    'label' => 'Add core',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-province-field_add_local_autonomy'.
  $field_instances['node-province-field_add_local_autonomy'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 19,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_add_local_autonomy',
    'label' => 'Add local autonomy',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-province-field_base_tax'.
  $field_instances['node-province-field_base_tax'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_base_tax',
    'label' => 'Base tax',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-province-field_citysize'.
  $field_instances['node-province-field_citysize'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_citysize',
    'label' => 'Citysize',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-province-field_code'.
  $field_instances['node-province-field_code'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_code',
    'label' => 'Code',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 3,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-province-field_constable'.
  $field_instances['node-province-field_constable'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_constable',
    'label' => 'Constable',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-province-field_controller'.
  $field_instances['node-province-field_controller'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_code',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_controller',
    'label' => 'Controller',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-province-field_courthouse'.
  $field_instances['node-province-field_courthouse'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_courthouse',
    'label' => 'Courthouse',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-province-field_culture'.
  $field_instances['node-province-field_culture'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_title',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_culture',
    'label' => 'Culture',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-province-field_discovered_by'.
  $field_instances['node-province-field_discovered_by'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 18,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 1,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_code',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_discovered_by',
    'label' => 'Discovered by',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-province-field_dock'.
  $field_instances['node-province-field_dock'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dock',
    'label' => 'Dock',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-province-field_extra_cost'.
  $field_instances['node-province-field_extra_cost'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 24,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_extra_cost',
    'label' => 'Extra cost',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-province-field_fort1'.
  $field_instances['node-province-field_fort1'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fort1',
    'label' => 'Fort1',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-province-field_fort2'.
  $field_instances['node-province-field_fort2'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fort2',
    'label' => 'Fort2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-province-field_fort3'.
  $field_instances['node-province-field_fort3'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fort3',
    'label' => 'Fort3',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-province-field_hre'.
  $field_instances['node-province-field_hre'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hre',
    'label' => 'HRE',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-province-field_is_city'.
  $field_instances['node-province-field_is_city'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_is_city',
    'label' => 'Is city',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-province-field_manpower'.
  $field_instances['node-province-field_manpower'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_manpower',
    'label' => 'Manpower',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-province-field_marketplace'.
  $field_instances['node-province-field_marketplace'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marketplace',
    'label' => 'Marketplace',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-province-field_mod'.
  $field_instances['node-province-field_mod'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 36,
      ),
      'eu4_provinces_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mod',
    'label' => 'Mod',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-province-field_native_ferocity'.
  $field_instances['node-province-field_native_ferocity'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 22,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_native_ferocity',
    'label' => 'Native ferocity',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-province-field_native_hostileness'.
  $field_instances['node-province-field_native_hostileness'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_native_hostileness',
    'label' => 'Native hostileness',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-province-field_native_size'.
  $field_instances['node-province-field_native_size'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 21,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_native_size',
    'label' => 'Native size',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-province-field_owner'.
  $field_instances['node-province-field_owner'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_code',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_owner',
    'label' => 'Owner',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-province-field_province_capital'.
  $field_instances['node-province-field_province_capital'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '"',
          'value_suffix' => '"',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_province_capital',
    'label' => 'Capital',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-province-field_province_category'.
  $field_instances['node-province-field_province_category'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 38,
      ),
      'eu4_provinces_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_province_category',
    'label' => 'Province category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-province-field_province_names'.
  $field_instances['node-province-field_province_names'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 35,
      ),
      'eu4_provinces_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_province_names',
    'label' => 'Province names',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-province-field_religion'.
  $field_instances['node-province-field_religion'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_title',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_religion',
    'label' => 'Religion',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-province-field_revolt_risk'.
  $field_instances['node-province-field_revolt_risk'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 26,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_revolt_risk',
    'label' => 'Revolt risk',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-province-field_shipyard'.
  $field_instances['node-province-field_shipyard'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_shipyard',
    'label' => 'Shipyard',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-province-field_tax_assessor'.
  $field_instances['node-province-field_tax_assessor'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 30,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tax_assessor',
    'label' => 'Tax assessor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-province-field_temple'.
  $field_instances['node-province-field_temple'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_temple',
    'label' => 'Temple',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-province-field_textile'.
  $field_instances['node-province-field_textile'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_textile',
    'label' => 'Textile',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-province-field_trade_depot'.
  $field_instances['node-province-field_trade_depot'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_trade_depot',
    'label' => 'Trade depot',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-province-field_trade_goods'.
  $field_instances['node-province-field_trade_goods'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_entity_title',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_trade_goods',
    'label' => 'Trade goods',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-province-field_university'.
  $field_instances['node-province-field_university'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 25,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_university',
    'label' => 'University',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-province-field_unrest'.
  $field_instances['node-province-field_unrest'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 29,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_unrest',
    'label' => 'Unrest',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-province-field_workshop'.
  $field_instances['node-province-field_workshop'] = array(
    'bundle' => 'province',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'eu4_provinces_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_workshop',
    'label' => 'Workshop',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add core');
  t('Add local autonomy');
  t('Base tax');
  t('Capital');
  t('Citysize');
  t('Code');
  t('Constable');
  t('Controller');
  t('Courthouse');
  t('Culture');
  t('Discovered by');
  t('Dock');
  t('Extra cost');
  t('Fort1');
  t('Fort2');
  t('Fort3');
  t('HRE');
  t('Is city');
  t('Manpower');
  t('Marketplace');
  t('Mod');
  t('Native ferocity');
  t('Native hostileness');
  t('Native size');
  t('Owner');
  t('Province category');
  t('Province country');
  t('Province culture');
  t('Province language switch');
  t('Province name');
  t('Province names');
  t('Religion');
  t('Revolt risk');
  t('Shipyard');
  t('Tax assessor');
  t('Temple');
  t('Textile');
  t('Trade depot');
  t('Trade goods');
  t('University');
  t('Unrest');
  t('Workshop');

  return $field_instances;
}
