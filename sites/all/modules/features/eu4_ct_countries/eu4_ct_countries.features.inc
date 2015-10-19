<?php
/**
 * @file
 * eu4_ct_countries.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eu4_ct_countries_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function eu4_ct_countries_node_info() {
  $items = array(
    'country' => array(
      'name' => t('Country'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
