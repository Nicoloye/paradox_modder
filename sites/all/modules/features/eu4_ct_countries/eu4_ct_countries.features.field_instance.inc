<?php
/**
 * @file
 * eu4_ct_countries.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eu4_ct_countries_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_monarch_names-field_monarch_chances'.
  $field_instances['field_collection_item-field_monarch_names-field_monarch_chances'] = array(
    'bundle' => 'field_monarch_names',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
        'weight' => 1,
      ),
      'eu4' => array(
        'label' => 'hidden',
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
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_monarch_chances',
    'label' => 'Monarch chances',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => ' = ',
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
  // 'field_collection_item-field_monarch_names-field_monarch_name'.
  $field_instances['field_collection_item-field_monarch_names-field_monarch_name'] = array(
    'bundle' => 'field_monarch_names',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_wrapper' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'eu4' => array(
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
          'value_no_new_line' => 1,
          'value_prefix' => '"',
          'value_suffix' => '"',
          'variable_hide' => 1,
        ),
        'type' => 'eu4_simple_field',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
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
    'field_name' => 'field_monarch_name',
    'label' => 'Monarch name',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-country-field_add_accepted_culture'.
  $field_instances['node-country-field_add_accepted_culture'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'eu4_countries_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => 1,
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
    'field_name' => 'field_add_accepted_culture',
    'label' => 'Add accepted culture',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-country-field_add_piety'.
  $field_instances['node-country-field_add_piety'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_add_piety',
    'label' => 'Add piety',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-country-field_army_names'.
  $field_instances['node-country-field_army_names'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
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
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_army_names',
    'label' => 'Army names',
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-country-field_capital'.
  $field_instances['node-country-field_capital'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4_countries_history' => array(
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
        'type' => 'eu4_entity_code_title',
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
    'field_name' => 'field_capital',
    'label' => 'Capital',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-country-field_code'.
  $field_instances['node-country-field_code'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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

  // Exported field_instance: 'node-country-field_color'.
  $field_instances['node-country-field_color'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 1,
          'cascade' => 0,
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
        'type' => 'eu4_color_rgb',
        'weight' => 20,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_color',
    'label' => 'Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-country-field_color1'.
  $field_instances['node-country-field_color1'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '	',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_color_rgb',
        'weight' => 28,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_color1',
    'label' => 'Color1',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-country-field_color2'.
  $field_instances['node-country-field_color2'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '	',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_color_rgb',
        'weight' => 29,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_color2',
    'label' => 'Color2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-country-field_color3'.
  $field_instances['node-country-field_color3'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 0,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '	',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_color_rgb',
        'weight' => 30,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_color3',
    'label' => 'Color3',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-country-field_country_category'.
  $field_instances['node-country-field_country_category'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'eu4_countries_common' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country_category',
    'label' => 'Country category',
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

  // Exported field_instance: 'node-country-field_culture_group_union'.
  $field_instances['node-country-field_culture_group_union'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_culture_group_union',
    'label' => 'Culture group union',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-country-field_elector'.
  $field_instances['node-country-field_elector'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_elector',
    'label' => 'Elector',
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

  // Exported field_instance: 'node-country-field_events'.
  $field_instances['node-country-field_events'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_events',
    'label' => 'Events',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-country-field_fixed_capital'.
  $field_instances['node-country-field_fixed_capital'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Cannot move capital away from this province & no power cost to move to it',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4_countries_history' => array(
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
        'type' => 'eu4_entity_code_title',
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
    'field_name' => 'field_fixed_capital',
    'label' => 'Fixed capital',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-country-field_fleet_names'.
  $field_instances['node-country-field_fleet_names'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
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
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fleet_names',
    'label' => 'Fleet names',
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-country-field_government'.
  $field_instances['node-country-field_government'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_government',
    'label' => 'Government type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-country-field_graphical_culture'.
  $field_instances['node-country-field_graphical_culture'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 1,
          'cascade' => 0,
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
        'weight' => 19,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_graphical_culture',
    'label' => 'Graphical culture',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-country-field_historical_friend'.
  $field_instances['node-country-field_historical_friend'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'eu4_countries_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => 1,
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
    'field_name' => 'field_historical_friend',
    'label' => 'Historical friend',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-country-field_historical_idea_groups'.
  $field_instances['node-country-field_historical_idea_groups'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
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
        'weight' => 21,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_historical_idea_groups',
    'label' => 'Historical idea groups',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-country-field_historical_rival'.
  $field_instances['node-country-field_historical_rival'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'eu4_countries_history' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => FALSE,
          'cascade' => 1,
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
    'field_name' => 'field_historical_rival',
    'label' => 'Historical rival',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-country-field_historical_units'.
  $field_instances['node-country-field_historical_units'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
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
        'weight' => 22,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_historical_units',
    'label' => 'Historical units',
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-country-field_leader_names'.
  $field_instances['node-country-field_leader_names'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
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
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_leader_names',
    'label' => 'Leader names',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-country-field_mercantilism'.
  $field_instances['node-country-field_mercantilism'] = array(
    'bundle' => 'country',
    'default_value' => array(
      0 => array(
        'value' => 0.1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_mercantilism',
    'label' => 'Mercantilism',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-country-field_mod'.
  $field_instances['node-country-field_mod'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'eu4_countries_common' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'eu4_countries_history' => array(
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
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-country-field_monarch_names'.
  $field_instances['node-country-field_monarch_names'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
          'item_wrapper' => 0,
          'label_wrapper' => 0,
          'prefix' => '',
          'suffix' => '',
          'value_no_new_line' => FALSE,
          'value_prefix' => '',
          'value_suffix' => '',
          'variable_hide' => FALSE,
        ),
        'type' => 'eu4_fc_simple',
        'weight' => 23,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_monarch_names',
    'label' => 'Monarch names',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-country-field_national_focus'.
  $field_instances['node-country-field_national_focus'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_national_focus',
    'label' => 'National focus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-country-field_primary_culture'.
  $field_instances['node-country-field_primary_culture'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_primary_culture',
    'label' => 'Primary culture',
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

  // Exported field_instance: 'node-country-field_religion'.
  $field_instances['node-country-field_religion'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'eu4_countries_history' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-country-field_ship_names'.
  $field_instances['node-country-field_ship_names'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'module' => 'eu4',
        'settings' => array(
          'add_line' => 0,
          'cascade' => 0,
          'field_wrapper' => 0,
          'force_embed' => 1,
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
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'eu4_countries_history' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ship_names',
    'label' => 'Ship names',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-country-field_technology_group'.
  $field_instances['node-country-field_technology_group'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_technology_group',
    'label' => 'Technology group',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-country-field_unit_type'.
  $field_instances['node-country-field_unit_type'] = array(
    'bundle' => 'country',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'eu4_countries_common' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'eu4_countries_common_colors' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'eu4_countries_common_tags' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'eu4_countries_history' => array(
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
    'field_name' => 'field_unit_type',
    'label' => 'Unit type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add accepted culture');
  t('Add piety');
  t('Army names');
  t('Cannot move capital away from this province & no power cost to move to it');
  t('Capital');
  t('Code');
  t('Color');
  t('Color1');
  t('Color2');
  t('Color3');
  t('Country category');
  t('Culture group union');
  t('Elector');
  t('Events');
  t('Fixed capital');
  t('Fleet names');
  t('Government type');
  t('Graphical culture');
  t('Historical friend');
  t('Historical idea groups');
  t('Historical rival');
  t('Historical units');
  t('Leader names');
  t('Mercantilism');
  t('Mod');
  t('Monarch chances');
  t('Monarch name');
  t('Monarch names');
  t('National focus');
  t('Primary culture');
  t('Religion');
  t('Ship names');
  t('Technology group');
  t('Unit type');

  return $field_instances;
}
