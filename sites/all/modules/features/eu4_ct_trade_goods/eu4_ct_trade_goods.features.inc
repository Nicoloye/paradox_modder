<?php
/**
 * @file
 * eu4_ct_trade_goods.features.inc
 */

/**
 * Implements hook_node_info().
 */
function eu4_ct_trade_goods_node_info() {
  $items = array(
    'trade_good' => array(
      'name' => t('Trade good'),
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
