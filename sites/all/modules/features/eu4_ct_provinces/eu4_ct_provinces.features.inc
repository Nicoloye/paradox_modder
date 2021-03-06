<?php
/**
 * @file
 * eu4_ct_provinces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eu4_ct_provinces_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function eu4_ct_provinces_node_info() {
  $items = array(
    'province' => array(
      'name' => t('Province'),
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
