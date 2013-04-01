<?php
/**
 * @file
 * news_content_type.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_content_type_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function news_content_type_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Verwenden Sie diesen Inhaltstyp für Inhalte zum Thema NEWS. Überschrift und Anreißer erscheinen in der rechten Seitenleiste in der Rubrik NEWS unterhalb des Suchfeldes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
