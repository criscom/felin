<?php
/**
 * @file
 * wurfmeldungen.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wurfmeldungen_node_info() {
  $items = array(
    'presse' => array(
      'name' => t('Presse'),
      'base' => 'node_content',
      'description' => t('Verwenden Sie diesen Inhaltstyp, um einen Presseartikel hinzuzufügen. Dieser Artikel erscheint automatisch im Bereich Presse.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
