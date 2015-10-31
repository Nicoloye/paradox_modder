<?php
/**
 * @file
 * eu4_ct_governments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eu4_ct_governments_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function eu4_ct_governments_node_info() {
  $items = array(
    'government' => array(
      'name' => t('Government'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Do not change tags in here without changing every other reference to them.
If adding new forms of governemnts, make sure they are uniquely named.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
