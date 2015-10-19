<?php
/**
 * @file
 * eu4_ct_factions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function eu4_ct_factions_node_info() {
  $items = array(
    'faction' => array(
      'name' => t('Faction'),
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
