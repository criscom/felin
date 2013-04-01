<?php
/**
 * @file
 * team.features.inc
 */

/**
 * Implements hook_node_info().
 */
function team_node_info() {
  $items = array(
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('Verwenden Sie diesen Inhaltstypen, um Mitgliederinnen des Teams hinzuzufügen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
