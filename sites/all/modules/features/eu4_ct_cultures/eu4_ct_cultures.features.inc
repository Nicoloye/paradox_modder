<?php
/**
 * @file
 * eu4_ct_cultures.features.inc
 */

/**
 * Implements hook_node_info().
 */
function eu4_ct_cultures_node_info() {
  $items = array(
    'culture' => array(
      'name' => t('Culture'),
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
