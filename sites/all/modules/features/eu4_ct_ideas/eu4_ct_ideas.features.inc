<?php
/**
 * @file
 * eu4_ct_ideas.features.inc
 */

/**
 * Implements hook_node_info().
 */
function eu4_ct_ideas_node_info() {
  $items = array(
    'idea' => array(
      'name' => t('Idea'),
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
