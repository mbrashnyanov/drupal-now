<?php
/**
 * @file
 * news_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function news_feature_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Content type for news'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
