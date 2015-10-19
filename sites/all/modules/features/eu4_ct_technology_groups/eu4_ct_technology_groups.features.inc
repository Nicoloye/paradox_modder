<?php
/**
 * @file
 * eu4_ct_technology_groups.features.inc
 */

/**
 * Implements hook_node_info().
 */
function eu4_ct_technology_groups_node_info() {
  $items = array(
    'technology_group' => array(
      'name' => t('Technology group'),
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
