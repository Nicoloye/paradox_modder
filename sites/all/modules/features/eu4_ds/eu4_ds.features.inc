<?php
/**
 * @file
 * eu4_ds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eu4_ds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
