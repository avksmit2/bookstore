<?php
/**
 * @file
 * audio_books.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function audio_books_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function audio_books_node_info() {
  $items = array(
    'books_on_tape' => array(
      'name' => t('Books on Tape'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Audio Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
