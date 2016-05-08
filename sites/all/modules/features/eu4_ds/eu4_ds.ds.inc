<?php
/**
 * @file
 * eu4_ds.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function eu4_ds_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|country|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'country';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_code',
        2 => 'field_country_category',
        3 => 'field_government',
        4 => 'field_elector',
        5 => 'field_mercantilism',
        6 => 'field_primary_culture',
        7 => 'field_add_accepted_culture',
        8 => 'field_culture_group_union',
        9 => 'field_religion',
        10 => 'field_technology_group',
        11 => 'field_unit_type',
        12 => 'field_historical_friend',
        13 => 'field_historical_rival',
        14 => 'field_capital',
        15 => 'field_fixed_capital',
        16 => 'field_national_focus',
        17 => 'field_add_piety',
        18 => 'field_events',
      ),
      'right' => array(
        19 => 'field_country_flag',
        20 => 'field_graphical_culture',
        21 => 'field_color',
        22 => 'field_historical_idea_groups',
        23 => 'field_historical_units',
        24 => 'field_monarch_names',
        25 => 'field_leader_names',
        26 => 'field_ship_names',
        27 => 'field_army_names',
        28 => 'field_color1',
        29 => 'field_fleet_names',
        30 => 'group_unit_colors',
        31 => 'field_color2',
        33 => 'field_color3',
      ),
      'footer' => array(
        32 => 'field_mod',
      ),
      'hidden' => array(
        34 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_code' => 'left',
      'field_country_category' => 'left',
      'field_government' => 'left',
      'field_elector' => 'left',
      'field_mercantilism' => 'left',
      'field_primary_culture' => 'left',
      'field_add_accepted_culture' => 'left',
      'field_culture_group_union' => 'left',
      'field_religion' => 'left',
      'field_technology_group' => 'left',
      'field_unit_type' => 'left',
      'field_historical_friend' => 'left',
      'field_historical_rival' => 'left',
      'field_capital' => 'left',
      'field_fixed_capital' => 'left',
      'field_national_focus' => 'left',
      'field_add_piety' => 'left',
      'field_events' => 'left',
      'field_country_flag' => 'right',
      'field_graphical_culture' => 'right',
      'field_color' => 'right',
      'field_historical_idea_groups' => 'right',
      'field_historical_units' => 'right',
      'field_monarch_names' => 'right',
      'field_leader_names' => 'right',
      'field_ship_names' => 'right',
      'field_army_names' => 'right',
      'field_color1' => 'right',
      'field_fleet_names' => 'right',
      'group_unit_colors' => 'right',
      'field_color2' => 'right',
      'field_mod' => 'footer',
      'field_color3' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|country|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faction|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faction';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'field_land_forcelimit_modifier',
        2 => 'field_manpower_recovery_speed',
        4 => 'field_unjustified_demands',
        6 => 'field_discipline',
        7 => 'field_war_exhaustion',
        8 => 'group_modifier',
        9 => 'field_global_trade_power',
        11 => 'field_diplomatic_upkeep',
        12 => 'field_global_trade_income_modif',
        13 => 'field_advisor_cost',
        14 => 'field_diplomatic_reputation',
        15 => 'field_build_cost',
        16 => 'field_global_tax_modifier',
        17 => 'field_advisor_pool',
        18 => 'field_heir_chance',
        19 => 'field_religious_unity',
        20 => 'field_land_morale',
        21 => 'field_land_maintenance_modifier',
        22 => 'field_global_foreign_trade_power',
        23 => 'field_naval_maintenance_modifier',
        24 => 'field_global_trade_goods_size',
        25 => 'field_global_manpower_modifier',
      ),
      'left' => array(
        1 => 'title',
        3 => 'field_faction_category',
        5 => 'field_monarch_power',
      ),
      'hidden' => array(
        10 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_land_forcelimit_modifier' => 'right',
      'title' => 'left',
      'field_manpower_recovery_speed' => 'right',
      'field_faction_category' => 'left',
      'field_unjustified_demands' => 'right',
      'field_monarch_power' => 'left',
      'field_discipline' => 'right',
      'field_war_exhaustion' => 'right',
      'group_modifier' => 'right',
      'field_global_trade_power' => 'right',
      '_add_existing_field' => 'hidden',
      'field_diplomatic_upkeep' => 'right',
      'field_global_trade_income_modif' => 'right',
      'field_advisor_cost' => 'right',
      'field_diplomatic_reputation' => 'right',
      'field_build_cost' => 'right',
      'field_global_tax_modifier' => 'right',
      'field_advisor_pool' => 'right',
      'field_heir_chance' => 'right',
      'field_religious_unity' => 'right',
      'field_land_morale' => 'right',
      'field_land_maintenance_modifier' => 'right',
      'field_global_foreign_trade_power' => 'right',
      'field_naval_maintenance_modifier' => 'right',
      'field_global_trade_goods_size' => 'right',
      'field_global_manpower_modifier' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|faction|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|government|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'government';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_factor',
        2 => 'field_monarchy',
        3 => 'field_modifier',
        4 => 'field_republic',
        5 => 'field_dictatorship',
        6 => 'field_government_religion',
        7 => 'field_papacy',
        8 => 'field_tribal',
        9 => 'field_nomad',
        10 => 'field_is_elective',
        11 => 'field_native_mechanic',
        12 => 'field_dutch_mechanics',
        13 => 'field_allow_convert',
        14 => 'field_allow_migration',
        15 => 'field_allow_westernize',
        16 => 'field_allow_vassal_war',
        17 => 'field_allow_vassal_alliance',
        18 => 'field_valid_for_new_country',
        19 => 'field_valid_for_nation_designer',
        20 => 'field_nation_designer_cost',
        21 => 'field_nation_designer_trigger',
        22 => 'field_duration',
        23 => 'field_republican_name',
        24 => 'field_royal_marriage',
        25 => 'field_boost_income',
        26 => 'field_can_use_trade_post',
        27 => 'group_ai_will_do',
        28 => 'field_ai_importance',
        29 => 'field_faction',
      ),
      'right' => array(
        30 => 'field_government_category',
        31 => 'field_government_bonus',
        32 => 'field_government_malus',
      ),
      'hidden' => array(
        33 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_factor' => 'left',
      'field_monarchy' => 'left',
      'field_modifier' => 'left',
      'field_republic' => 'left',
      'field_dictatorship' => 'left',
      'field_government_religion' => 'left',
      'field_papacy' => 'left',
      'field_tribal' => 'left',
      'field_nomad' => 'left',
      'field_is_elective' => 'left',
      'field_native_mechanic' => 'left',
      'field_dutch_mechanics' => 'left',
      'field_allow_convert' => 'left',
      'field_allow_migration' => 'left',
      'field_allow_westernize' => 'left',
      'field_allow_vassal_war' => 'left',
      'field_allow_vassal_alliance' => 'left',
      'field_valid_for_new_country' => 'left',
      'field_valid_for_nation_designer' => 'left',
      'field_nation_designer_cost' => 'left',
      'field_nation_designer_trigger' => 'left',
      'field_duration' => 'left',
      'field_republican_name' => 'left',
      'field_royal_marriage' => 'left',
      'field_boost_income' => 'left',
      'field_can_use_trade_post' => 'left',
      'group_ai_will_do' => 'left',
      'field_ai_importance' => 'left',
      'field_faction' => 'left',
      'field_government_category' => 'right',
      'field_government_bonus' => 'right',
      'field_government_malus' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|government|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|province|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'province';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'group_tabs',
        7 => 'field_base_tax',
        8 => 'field_trade_goods',
        9 => 'field_trade_winds',
        10 => 'field_province_capital',
        11 => 'field_trade_winds_category',
        12 => 'field_citysize',
        13 => 'field_fort1',
        14 => 'field_is_city',
        15 => 'field_fort2',
        16 => 'field_manpower',
        17 => 'field_add_local_autonomy',
        18 => 'field_fort3',
        19 => 'field_extra_cost',
        20 => 'field_temple',
        21 => 'field_culture',
        22 => 'field_religion',
        23 => 'field_workshop',
        24 => 'field_revolt_risk',
        25 => 'field_native_size',
        26 => 'field_unrest',
        27 => 'field_marketplace',
        28 => 'field_native_ferocity',
        29 => 'field_university',
        30 => 'field_native_hostileness',
        31 => 'field_shipyard',
        32 => 'field_courthouse',
        33 => 'field_tax_assessor',
        34 => 'field_trade_depot',
        35 => 'field_dock',
        36 => 'field_constable',
        37 => 'field_textile',
        38 => 'field_province_category',
        39 => 'field_add_core',
        40 => 'field_owner',
        41 => 'field_controller',
        42 => 'field_discovered_by',
        43 => 'field_hre',
        44 => 'group_politic',
        45 => 'group_population',
        46 => 'group_economy',
        47 => 'group_internal_troubles',
        48 => 'group_buildings',
        49 => 'group_colony',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_code',
        3 => 'field_climate',
        4 => 'field_province_names',
      ),
      'footer' => array(
        5 => 'field_mod',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_tabs' => 'left',
      'title' => 'right',
      'field_code' => 'right',
      'field_climate' => 'right',
      'field_province_names' => 'right',
      'field_mod' => 'footer',
      '_add_existing_field' => 'hidden',
      'field_base_tax' => 'left',
      'field_trade_goods' => 'left',
      'field_trade_winds' => 'left',
      'field_province_capital' => 'left',
      'field_trade_winds_category' => 'left',
      'field_citysize' => 'left',
      'field_fort1' => 'left',
      'field_is_city' => 'left',
      'field_fort2' => 'left',
      'field_manpower' => 'left',
      'field_add_local_autonomy' => 'left',
      'field_fort3' => 'left',
      'field_extra_cost' => 'left',
      'field_temple' => 'left',
      'field_culture' => 'left',
      'field_religion' => 'left',
      'field_workshop' => 'left',
      'field_revolt_risk' => 'left',
      'field_native_size' => 'left',
      'field_unrest' => 'left',
      'field_marketplace' => 'left',
      'field_native_ferocity' => 'left',
      'field_university' => 'left',
      'field_native_hostileness' => 'left',
      'field_shipyard' => 'left',
      'field_courthouse' => 'left',
      'field_tax_assessor' => 'left',
      'field_trade_depot' => 'left',
      'field_dock' => 'left',
      'field_constable' => 'left',
      'field_textile' => 'left',
      'field_province_category' => 'left',
      'field_add_core' => 'left',
      'field_owner' => 'left',
      'field_controller' => 'left',
      'field_discovered_by' => 'left',
      'field_hre' => 'left',
      'group_politic' => 'left',
      'group_population' => 'left',
      'group_economy' => 'left',
      'group_internal_troubles' => 'left',
      'group_buildings' => 'left',
      'group_colony' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|province|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function eu4_ds_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4';
  $ds_view_mode->label = 'EU4';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['eu4'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4_countries_common';
  $ds_view_mode->label = 'Countries - Common';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['eu4_countries_common'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4_countries_common_colors';
  $ds_view_mode->label = 'Countries - Common colors';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['eu4_countries_common_colors'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4_countries_common_tags';
  $ds_view_mode->label = 'Countries - Common tags';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['eu4_countries_common_tags'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4_countries_history';
  $ds_view_mode->label = 'Countries - History';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['eu4_countries_history'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4_governments_common';
  $ds_view_mode->label = 'Governments - Common';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['eu4_governments_common'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'eu4_provinces_history';
  $ds_view_mode->label = 'Provinces - History';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['eu4_provinces_history'] = $ds_view_mode;

  return $export;
}
