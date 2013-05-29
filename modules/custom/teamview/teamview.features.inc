<?php
/**
 * @file
 * teamview.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teamview_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function teamview_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function teamview_node_info() {
  $items = array(
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('Verwenden Sie diesen Inhaltstypen, um Mitgliederinnen des Teams hinzuzufügen'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
