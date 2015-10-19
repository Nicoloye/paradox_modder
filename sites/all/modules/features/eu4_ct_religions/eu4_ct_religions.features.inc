<?php
/**
 * @file
 * eu4_ct_religions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function eu4_ct_religions_node_info() {
  $items = array(
    'religion' => array(
      'name' => t('Religion'),
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
