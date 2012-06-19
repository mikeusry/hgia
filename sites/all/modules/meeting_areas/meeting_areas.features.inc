<?php
/**
 * @file
 * meeting_areas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function meeting_areas_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function meeting_areas_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function meeting_areas_node_info() {
  $items = array(
    'meeting_space' => array(
      'name' => t('Meeting Space'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
