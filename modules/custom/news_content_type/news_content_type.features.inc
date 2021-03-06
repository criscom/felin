<?php
/**
 * @file
 * news_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_content_type_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function news_content_type_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Termine'),
      'base' => 'node_content',
      'description' => t('Verwenden Sie diesen Inhaltstyp für Inhalte zum Thema TERMINE. Überschrift und Anreißer erscheinen in der rechten Seitenleiste in der Rubrik AKTUELLES > TERMINE.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
