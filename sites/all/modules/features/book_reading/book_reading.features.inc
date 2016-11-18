<?php
/**
 * @file
 * book_reading.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function book_reading_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function book_reading_node_info() {
  $items = array(
    'book_readings' => array(
      'name' => t('Book Readings'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Book Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
