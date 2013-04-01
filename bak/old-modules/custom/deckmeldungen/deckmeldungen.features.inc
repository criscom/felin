<?php
/**
 * @file
 * deckmeldungen.features.inc
 */

/**
 * Implements hook_node_info().
 */
function deckmeldungen_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Verwenden Sie diesen Inhaltstyp für Beiträge, die unter der Rubrik ARBEIT im Bereich Frauenbeauftragte der Stadt Graz erscheinen sollen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
