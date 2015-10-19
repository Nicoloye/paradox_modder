<?php
/**
 * @file
 * eu4_field_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eu4_field_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
