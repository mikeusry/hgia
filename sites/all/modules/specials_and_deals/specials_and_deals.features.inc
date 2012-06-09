<?php
/**
 * @file
 * specials_and_deals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function specials_and_deals_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function specials_and_deals_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function specials_and_deals_node_info() {
  $items = array(
    'deal' => array(
      'name' => t('Deal'),
      'base' => 'node_content',
      'description' => t('A special offer / deal or package'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
