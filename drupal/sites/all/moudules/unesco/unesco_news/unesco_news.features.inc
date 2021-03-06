<?php
/**
 * @file
 * unesco_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unesco_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unesco_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function unesco_news_node_info() {
  $items = array(
    'article' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'unescommunity_news' => array(
      'name' => t('Unescommunity News'),
      'base' => 'node_content',
      'description' => t('News for unescommunity'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
