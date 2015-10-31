<?php
/**
 * @file
 * eu4_ct_governments.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eu4_ct_governments_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_accepted_culture_threshold'.
  $field_instances['field_collection_item-field_government_bonus-field_accepted_culture_threshold'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_accepted_culture_threshold',
    'label' => 'Accepted culture threshold',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_army_tradition'.
  $field_instances['field_collection_item-field_government_bonus-field_army_tradition'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_army_tradition',
    'label' => 'Army tradition',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_caravan_power'.
  $field_instances['field_collection_item-field_government_bonus-field_caravan_power'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_caravan_power',
    'label' => 'Caravan power',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_core_creation'.
  $field_instances['field_collection_item-field_government_bonus-field_core_creation'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_core_creation',
    'label' => 'Core creation',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 50,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_culture_conversion_cost'.
  $field_instances['field_collection_item-field_government_bonus-field_culture_conversion_cost'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_culture_conversion_cost',
    'label' => 'Culture conversion cost',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_diplomatic_reputation'.
  $field_instances['field_collection_item-field_government_bonus-field_diplomatic_reputation'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_diplomatic_reputation',
    'label' => 'Diplomatic reputation',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 63,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_diplomatic_upkeep'.
  $field_instances['field_collection_item-field_government_bonus-field_diplomatic_upkeep'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integer only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_diplomatic_upkeep',
    'label' => 'Diplomatic upkeep',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_discipline'.
  $field_instances['field_collection_item-field_government_bonus-field_discipline'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_discipline',
    'label' => 'Discipline',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_global_autonomy'.
  $field_instances['field_collection_item-field_government_bonus-field_global_autonomy'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_autonomy',
    'label' => 'Global autonomy',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_global_manpower_modifier'.
  $field_instances['field_collection_item-field_government_bonus-field_global_manpower_modifier'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_manpower_modifier',
    'label' => 'Global manpower modifier',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
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

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_global_spy_defence'.
  $field_instances['field_collection_item-field_government_bonus-field_global_spy_defence'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_spy_defence',
    'label' => 'Global spy defence',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 64,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_global_tax_modifier'.
  $field_instances['field_collection_item-field_government_bonus-field_global_tax_modifier'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_tax_modifier',
    'label' => 'Global tax modifier',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_global_trade_income_modif'.
  $field_instances['field_collection_item-field_government_bonus-field_global_trade_income_modif'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_trade_income_modif',
    'label' => 'Global trade income modifier',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 55,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_global_unrest'.
  $field_instances['field_collection_item-field_government_bonus-field_global_unrest'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_unrest',
    'label' => 'Global unrest',
    'required' => 0,
    'settings' => array(
      'max' => -1,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_heavy_ship_power'.
  $field_instances['field_collection_item-field_government_bonus-field_heavy_ship_power'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_heavy_ship_power',
    'label' => 'Heavy ship power',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_heir_chance'.
  $field_instances['field_collection_item-field_government_bonus-field_heir_chance'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_heir_chance',
    'label' => 'Heir chance',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 60,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_infantry_power'.
  $field_instances['field_collection_item-field_government_bonus-field_infantry_power'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_infantry_power',
    'label' => 'Infantry power',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 61,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_land_forcelimit_modifier'.
  $field_instances['field_collection_item-field_government_bonus-field_land_forcelimit_modifier'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_land_forcelimit_modifier',
    'label' => 'Land forcelimit modifier',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 48,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_land_maintenance_modifier'.
  $field_instances['field_collection_item-field_government_bonus-field_land_maintenance_modifier'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_land_maintenance_modifier',
    'label' => 'Land maintenance modifier',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_land_morale'.
  $field_instances['field_collection_item-field_government_bonus-field_land_morale'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_land_morale',
    'label' => 'Land morale',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_legitimacy'.
  $field_instances['field_collection_item-field_government_bonus-field_legitimacy'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_legitimacy',
    'label' => 'Legitimacy',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
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

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_manpower_recovery_speed'.
  $field_instances['field_collection_item-field_government_bonus-field_manpower_recovery_speed'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_manpower_recovery_speed',
    'label' => 'Manpower recovery speed',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
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

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_merchants'.
  $field_instances['field_collection_item-field_government_bonus-field_merchants'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_merchants',
    'label' => 'Merchants',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
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

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_prestige'.
  $field_instances['field_collection_item-field_government_bonus-field_prestige'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_prestige',
    'label' => 'Prestige',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_production_efficiency'.
  $field_instances['field_collection_item-field_government_bonus-field_production_efficiency'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_production_efficiency',
    'label' => 'Production efficiency',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
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

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_recover_army_morale_speed'.
  $field_instances['field_collection_item-field_government_bonus-field_recover_army_morale_speed'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_recover_army_morale_speed',
    'label' => 'Recover army morale speed',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 62,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_stability_cost_modifier'.
  $field_instances['field_collection_item-field_government_bonus-field_stability_cost_modifier'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_stability_cost_modifier',
    'label' => 'Stability cost modifier',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_technology_cost'.
  $field_instances['field_collection_item-field_government_bonus-field_technology_cost'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_technology_cost',
    'label' => 'Technology cost',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 59,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_tolerance_heathen'.
  $field_instances['field_collection_item-field_government_bonus-field_tolerance_heathen'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integer only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tolerance_heathen',
    'label' => 'Tolerance heathen',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_tolerance_heretic'.
  $field_instances['field_collection_item-field_government_bonus-field_tolerance_heretic'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tolerance_heretic',
    'label' => 'Tolerance heretic',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_tolerance_own'.
  $field_instances['field_collection_item-field_government_bonus-field_tolerance_own'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tolerance_own',
    'label' => 'Tolerance own',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_trade_efficiency'.
  $field_instances['field_collection_item-field_government_bonus-field_trade_efficiency'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_trade_efficiency',
    'label' => 'Trade efficiency',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_unjustified_demands'.
  $field_instances['field_collection_item-field_government_bonus-field_unjustified_demands'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_unjustified_demands',
    'label' => 'Unjustified demands',
    'required' => 0,
    'settings' => array(
      'max' => -0.01,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_vassal_income'.
  $field_instances['field_collection_item-field_government_bonus-field_vassal_income'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_vassal_income',
    'label' => 'Vassal income',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_bonus-field_years_of_nationalism'.
  $field_instances['field_collection_item-field_government_bonus-field_years_of_nationalism'] = array(
    'bundle' => 'field_government_bonus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_years_of_nationalism',
    'label' => 'Years of nationalism',
    'required' => 0,
    'settings' => array(
      'max' => -1,
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
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_malus-field_diplomatic_upkeep'.
  $field_instances['field_collection_item-field_government_malus-field_diplomatic_upkeep'] = array(
    'bundle' => 'field_government_malus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Negative integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_diplomatic_upkeep',
    'label' => 'Diplomatic upkeep',
    'required' => 0,
    'settings' => array(
      'max' => -1,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_malus-field_global_unrest'.
  $field_instances['field_collection_item-field_government_malus-field_global_unrest'] = array(
    'bundle' => 'field_government_malus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_global_unrest',
    'label' => 'Global unrest',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_malus-field_min_autonomy'.
  $field_instances['field_collection_item-field_government_malus-field_min_autonomy'] = array(
    'bundle' => 'field_government_malus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive integers only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_min_autonomy',
    'label' => 'Min autonomy',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_government_malus-field_technology_cost'.
  $field_instances['field_collection_item-field_government_malus-field_technology_cost'] = array(
    'bundle' => 'field_government_malus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Positive decimals only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_technology_cost',
    'label' => 'Technology cost',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0.01,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_modifier-field_factor'.
  $field_instances['field_collection_item-field_modifier-field_factor'] = array(
    'bundle' => 'field_modifier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => 2,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_factor',
    'label' => 'Factor',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_modifier-field_value'.
  $field_instances['field_collection_item-field_modifier-field_value'] = array(
    'bundle' => 'field_modifier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'eu4' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => 2,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 1,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_value',
    'label' => 'Value',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-government-field_ai_importance'.
  $field_instances['node-government-field_ai_importance'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Determines overall \'quality\' of government when government is auto-picked.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 1,
          'add_line_before' => FALSE,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_ai_importance',
    'label' => 'AI importance',
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-government-field_allow_convert'.
  $field_instances['node-government-field_allow_convert'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Determines which governments can be force-converted to and from via CBs',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_allow_convert',
    'label' => 'Allow convert',
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

  // Exported field_instance: 'node-government-field_allow_migration'.
  $field_instances['node-government-field_allow_migration'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_allow_migration',
    'label' => 'Allow migration',
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

  // Exported field_instance: 'node-government-field_allow_vassal_alliance'.
  $field_instances['node-government-field_allow_vassal_alliance'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
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
    'field_name' => 'field_allow_vassal_alliance',
    'label' => 'Allow vassal alliance',
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

  // Exported field_instance: 'node-government-field_allow_vassal_war'.
  $field_instances['node-government-field_allow_vassal_war'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_allow_vassal_war',
    'label' => 'Allow vassal war',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-government-field_allow_westernize'.
  $field_instances['node-government-field_allow_westernize'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
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
    'field_name' => 'field_allow_westernize',
    'label' => 'Allow westernize',
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

  // Exported field_instance: 'node-government-field_boost_income'.
  $field_instances['node-government-field_boost_income'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_boost_income',
    'label' => 'Boost income',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-government-field_can_use_trade_post'.
  $field_instances['node-government-field_can_use_trade_post'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 1,
          'add_line_before' => FALSE,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_can_use_trade_post',
    'label' => 'Can use trade post',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-government-field_dictatorship'.
  $field_instances['node-government-field_dictatorship'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_dictatorship',
    'label' => 'Dictatorship',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-government-field_duration'.
  $field_instances['node-government-field_duration'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_duration',
    'label' => 'Duration',
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

  // Exported field_instance: 'node-government-field_dutch_mechanics'.
  $field_instances['node-government-field_dutch_mechanics'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_dutch_mechanics',
    'label' => 'Dutch mechanics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-government-field_faction'.
  $field_instances['node-government-field_faction'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => FALSE,
          'cascade' => 1,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_entity_title',
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
    'field_name' => 'field_faction',
    'label' => 'Faction',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-government-field_factor'.
  $field_instances['node-government-field_factor'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => 1,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_factor',
    'label' => 'Factor',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-government-field_government_bonus'.
  $field_instances['node-government-field_government_bonus'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '#bonus',
          'prefix_add_line' => 1,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_fc_simple',
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
    'field_name' => 'field_government_bonus',
    'label' => 'Bonus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_fieldset',
      'settings' => array(
        'collapsed' => 1,
        'field_as_label' => '',
        'last_item_collapsed' => 1,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_fieldset',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-government-field_government_category'.
  $field_instances['node-government-field_government_category'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_government_category',
    'label' => 'Government category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-government-field_government_malus'.
  $field_instances['node-government-field_government_malus'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '#malus',
          'prefix_add_line' => 1,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_fc_simple',
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
    'field_name' => 'field_government_malus',
    'label' => 'Malus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_fieldset',
      'settings' => array(
        'collapsed' => 1,
        'field_as_label' => '',
        'last_item_collapsed' => 1,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_fieldset',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-government-field_government_religion'.
  $field_instances['node-government-field_government_religion'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_government_religion',
    'label' => 'Religion',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-government-field_is_elective'.
  $field_instances['node-government-field_is_elective'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_is_elective',
    'label' => 'Is elective',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-government-field_modifier'.
  $field_instances['node-government-field_modifier'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Uses all \'modifiers\' possible that\'s exported as a Modifier.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 1,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => 1,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '{',
          'value_suffix' => '	}',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_fc_simple',
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
    'field_name' => 'field_modifier',
    'label' => 'Modifier',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-government-field_monarchy'.
  $field_instances['node-government-field_monarchy'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_monarchy',
    'label' => 'Monarchy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-government-field_nation_designer_cost'.
  $field_instances['node-government-field_nation_designer_cost'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
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
    'field_name' => 'field_nation_designer_cost',
    'label' => 'Nation designer cost',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-government-field_nation_designer_trigger'.
  $field_instances['node-government-field_nation_designer_trigger'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_nation_designer_trigger',
    'label' => 'Nation designer trigger',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-government-field_native_mechanic'.
  $field_instances['node-government-field_native_mechanic'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_native_mechanic',
    'label' => 'Native mechanic',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-government-field_nomad'.
  $field_instances['node-government-field_nomad'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
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
    'field_name' => 'field_nomad',
    'label' => 'Nomad',
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

  // Exported field_instance: 'node-government-field_papacy'.
  $field_instances['node-government-field_papacy'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_papacy',
    'label' => 'Papacy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-government-field_republic'.
  $field_instances['node-government-field_republic'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_republic',
    'label' => 'Republic',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-government-field_republican_name'.
  $field_instances['node-government-field_republican_name'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_republican_name',
    'label' => 'Republican name',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-government-field_royal_marriage'.
  $field_instances['node-government-field_royal_marriage'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_royal_marriage',
    'label' => 'Royal marriage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-government-field_tribal'.
  $field_instances['node-government-field_tribal'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_simple_field',
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
    'field_name' => 'field_tribal',
    'label' => 'Tribal',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-government-field_valid_for_nation_designer'.
  $field_instances['node-government-field_valid_for_nation_designer'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'add_line_before' => FALSE,
          'cascade' => FALSE,
          'field_wrapper' => 0,
          'force_embed' => FALSE,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => FALSE,
          'suffix' => '',
          'suffix_add_line' => FALSE,
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
    'field_name' => 'field_valid_for_nation_designer',
    'label' => 'Valid for nation designer',
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

  // Exported field_instance: 'node-government-field_valid_for_new_country'.
  $field_instances['node-government-field_valid_for_new_country'] = array(
    'bundle' => 'government',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Determines which governments can be converted to normally',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'eu4_governments_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'add_line_before' => 1,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'indent' => '',
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'prefix_add_line' => 0,
          'suffix' => '',
          'suffix_add_line' => 0,
          'value_no_new_line' => 0,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => 0,
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
    'field_name' => 'field_valid_for_new_country',
    'label' => 'Valid for new country',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('AI importance');
  t('Accepted culture threshold');
  t('Allow convert');
  t('Allow migration');
  t('Allow vassal alliance');
  t('Allow vassal war');
  t('Allow westernize');
  t('Army tradition');
  t('Bonus');
  t('Boost income');
  t('Can use trade post');
  t('Caravan power');
  t('Core creation');
  t('Culture conversion cost');
  t('Determines overall \'quality\' of government when government is auto-picked.');
  t('Determines which governments can be converted to normally');
  t('Determines which governments can be force-converted to and from via CBs');
  t('Dictatorship');
  t('Diplomatic reputation');
  t('Diplomatic upkeep');
  t('Discipline');
  t('Duration');
  t('Dutch mechanics');
  t('Faction');
  t('Factor');
  t('Global autonomy');
  t('Global manpower modifier');
  t('Global spy defence');
  t('Global tax modifier');
  t('Global trade income modifier');
  t('Global unrest');
  t('Government category');
  t('Heavy ship power');
  t('Heir chance');
  t('Infantry power');
  t('Is elective');
  t('Land forcelimit modifier');
  t('Land maintenance modifier');
  t('Land morale');
  t('Legitimacy');
  t('Malus');
  t('Manpower recovery speed');
  t('Merchants');
  t('Min autonomy');
  t('Modifier');
  t('Monarchy');
  t('Nation designer cost');
  t('Nation designer trigger');
  t('Native mechanic');
  t('Negative decimals only.');
  t('Negative integers only.');
  t('Nomad');
  t('Papacy');
  t('Positive decimals only.');
  t('Positive integer only.');
  t('Positive integers only.');
  t('Prestige');
  t('Production efficiency');
  t('Recover army morale speed');
  t('Religion');
  t('Republic');
  t('Republican name');
  t('Royal marriage');
  t('Stability cost modifier');
  t('Technology cost');
  t('Tolerance heathen');
  t('Tolerance heretic');
  t('Tolerance own');
  t('Trade efficiency');
  t('Tribal');
  t('Unjustified demands');
  t('Uses all \'modifiers\' possible that\'s exported as a Modifier.');
  t('Valid for nation designer');
  t('Valid for new country');
  t('Value');
  t('Vassal income');
  t('Years of nationalism');

  return $field_instances;
}
