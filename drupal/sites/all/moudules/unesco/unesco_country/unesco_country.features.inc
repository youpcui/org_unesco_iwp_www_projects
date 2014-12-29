<?php
/**
 * @file
 * unesco_country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unesco_country_ctools_plugin_api() {
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
function unesco_country_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function unesco_country_node_info() {
  $items = array(
    'country_profile' => array(
      'name' => t('Country Profile'),
      'base' => 'node_content',
      'description' => t('Profile for countries'),
      'has_title' => '1',
      'title_label' => t('Short name'),
      'help' => '',
    ),
  );
  return $items;
}
