<?php
/**
 * @file
 * wurfmeldungen.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function wurfmeldungen_field_default_fields() {
  $fields = array();

  // Exported field: 'node-presse-body'
  $fields['node-presse-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'presse',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Verwenden Sie dieses Eingabefeld sowohl für den Anreißer für die Übersichtsseite als auch den Volltext auf der Detailseite. Um Anreißer vom Volltext zu trennen, verwenden Sie bitte die Funktion "Insert Teaser Break" im Editor in der zweiten Iconleiste ganz rechts (Icon mit der rot gepunkteten Linie).',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-presse-field_files'
  $fields['node-presse-field_files'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '10',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_files',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'presse',
      'deleted' => '0',
      'description' => 'Laden Sie hier ein Dokument in den Presseartikel. Dieses Dokument kann von Besuchern ihrer Website geladen werden.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_files',
      'label' => 'Presseartikel laden',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => 'presse',
        'file_extensions' => 'txt pdf doc docx',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__artikel' => 0,
            'colorbox__artikel-teaser' => 0,
            'colorbox__large' => 0,
            'colorbox__medium' => 0,
            'colorbox__team' => 0,
            'colorbox__thumbnail' => 0,
            'image' => 0,
            'image_artikel' => 0,
            'image_artikel-teaser' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_team' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-presse-field_image'
  $fields['node-presse-field_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'presse',
      'deleted' => '0',
      'description' => 'Laden Sie hier einen Presseartikel, den sie als Bild gespeichert haben: JPG, PNG, GIF Dateien.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image',
      'label' => 'Bild hochladen',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'file_directory' => 'presse',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 1,
          'insert_class' => '',
          'insert_default' => 'colorbox__large',
          'insert_styles' => array(
            'auto' => 0,
            'colorbox__artikel' => 0,
            'colorbox__artikel-teaser' => 0,
            'colorbox__large' => 'colorbox__large',
            'colorbox__medium' => 0,
            'colorbox__team' => 0,
            'colorbox__thumbnail' => 0,
            'image' => 0,
            'image_artikel' => 0,
            'image_artikel-teaser' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_team' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'large',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bild hochladen');
  t('Body');
  t('Laden Sie hier ein Dokument in den Presseartikel. Dieses Dokument kann von Besuchern ihrer Website geladen werden.');
  t('Laden Sie hier einen Presseartikel, den sie als Bild gespeichert haben: JPG, PNG, GIF Dateien.');
  t('Presseartikel laden');
  t('Verwenden Sie dieses Eingabefeld sowohl für den Anreißer für die Übersichtsseite als auch den Volltext auf der Detailseite. Um Anreißer vom Volltext zu trennen, verwenden Sie bitte die Funktion "Insert Teaser Break" im Editor in der zweiten Iconleiste ganz rechts (Icon mit der rot gepunkteten Linie).');

  return $fields;
}
