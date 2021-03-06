<?php
/**
 * @file
 * eu4_ct_ideas.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function eu4_ct_ideas_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-idea-field_idea_category'.
  $field_instances['node-idea-field_idea_category'] = array(
    'bundle' => 'idea',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_idea_category',
    'label' => 'Idea category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Idea category');

  return $field_instances;
}
