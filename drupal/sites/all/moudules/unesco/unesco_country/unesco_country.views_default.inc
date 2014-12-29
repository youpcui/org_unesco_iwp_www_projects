<?php
/**
 * @file
 * unesco_country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unesco_country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countries';
  $view->description = 'A list of all content, by letter.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countries';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countries: %1';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_url' => 'field_url',
    'field_media_image' => 'field_media_image',
    'title' => 'title',
    'field_short_name' => 'field_short_name',
    'field_joined_unesco' => 'field_joined_unesco',
    'field_region' => 'field_region',
    'field_whsites' => 'field_whsites',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_media_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_short_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_joined_unesco' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_whsites' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = 'Flag';
  $handler->display->display_options['fields']['field_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Joined UNESCO */
  $handler->display->display_options['fields']['field_joined_unesco']['id'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['table'] = 'field_data_field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['field'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_joined_unesco']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'UN Region';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: WHSites */
  $handler->display->display_options['fields']['field_whsites']['id'] = 'field_whsites';
  $handler->display->display_options['fields']['field_whsites']['table'] = 'field_data_field_whsites';
  $handler->display->display_options['fields']['field_whsites']['field'] = 'field_whsites';
  $handler->display->display_options['fields']['field_whsites']['label'] = 'World Heritage Sites';
  $handler->display->display_options['fields']['field_whsites']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_whsites']['alter']['path'] = 'http://whc.unesco.org/en/statesparties/[title]/';
  $handler->display->display_options['fields']['field_whsites']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_whsites']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_whsites']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'country_profile' => 'country_profile',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Country List */
  $handler = $view->new_display('page', 'Country List', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>List of the 195 Members (and the 8 Associate Members) of UNESCO and the date on which they became members (or Associate Members) of the Organization, as of 23 November 2011</p>
<h3>Members</h3>
<ul class"country_views">
<li id="country_views_list" class="country_views leaf first selected"><a href="/countries/">List</a></li>
<li id="country_views_grid" class="country_views leaf"><a href="/countries/grid">Grid</a></li>
<li id="country_views_map" class="country_views leaf last"><a href="/countries/map">Map</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  $handler->display->display_options['fields']['field_media_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Country';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Joined UNESCO */
  $handler->display->display_options['fields']['field_joined_unesco']['id'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['table'] = 'field_data_field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['field'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_joined_unesco']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'UN Region';
  $handler->display->display_options['fields']['field_region']['alter']['path'] = '[field_region-value]';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'countries';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Region (field_region) */
  $handler->display->display_options['arguments']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['arguments']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['arguments']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['arguments']['field_region_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_region_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_region_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_region_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_region_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_region_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_region_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_region_value']['case'] = 'ucfirst';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Country Grid */
  $handler = $view->new_display('page', 'Country Grid', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>List of the 195 Members (and the 8 Associate Members) of UNESCO and the date on which they became members (or Associate Members) of the Organization, as of 23 November 2011</p>
<h3>Members</h3>
<ul>
<li class="leaf first"><a href="/countries/">List</a></li>
<li class="leaf selected"><a href="/countries/grid">Grid</a></li>
<li class="leaf last"><a href="/countries/map">Map</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = 'Flag';
  $handler->display->display_options['fields']['field_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short name */
  $handler->display->display_options['fields']['field_short_name']['id'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['table'] = 'field_data_field_short_name';
  $handler->display->display_options['fields']['field_short_name']['field'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['label'] = 'State name';
  $handler->display->display_options['fields']['field_short_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_name']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_short_name']['element_label_colon'] = FALSE;
  /* Field: Content: Joined UNESCO */
  $handler->display->display_options['fields']['field_joined_unesco']['id'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['table'] = 'field_data_field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['field'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_joined_unesco']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'UN Region';
  $handler->display->display_options['fields']['field_region']['alter']['path'] = '[field_region-value]';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: WHSites */
  $handler->display->display_options['fields']['field_whsites']['id'] = 'field_whsites';
  $handler->display->display_options['fields']['field_whsites']['table'] = 'field_data_field_whsites';
  $handler->display->display_options['fields']['field_whsites']['field'] = 'field_whsites';
  $handler->display->display_options['fields']['field_whsites']['label'] = 'World Heritage Sites';
  $handler->display->display_options['fields']['field_whsites']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_whsites']['alter']['path'] = 'http://whc.unesco.org/en/statesparties/[title]/';
  $handler->display->display_options['fields']['field_whsites']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_whsites']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_whsites']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'countries/grid';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Country Map */
  $handler = $view->new_display('page', 'Country Map', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>List of the 195 Members (and the 8 Associate Members) of UNESCO and the date on which they became members (or Associate Members) of the Organization, as of 23 November 2011</p>
<h3>Members</h3>
<ul>
<li class="leaf first"><a href="/countries/">List</a></li>
<li class="leaf"><a href="/countries/grid">Grid</a></li>
<li class="leaf last selected"><a href="/countries/map">Map</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = 'Flag';
  $handler->display->display_options['fields']['field_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'file_view_mode' => 'media_small',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Short name */
  $handler->display->display_options['fields']['field_short_name']['id'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['table'] = 'field_data_field_short_name';
  $handler->display->display_options['fields']['field_short_name']['field'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['label'] = 'State name';
  $handler->display->display_options['fields']['field_short_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_name']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_short_name']['element_label_colon'] = FALSE;
  /* Field: Content: Joined UNESCO */
  $handler->display->display_options['fields']['field_joined_unesco']['id'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['table'] = 'field_data_field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['field'] = 'field_joined_unesco';
  $handler->display->display_options['fields']['field_joined_unesco']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_joined_unesco']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'UN Region';
  $handler->display->display_options['fields']['field_region']['alter']['path'] = '[field_region-value]';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: WHSites */
  $handler->display->display_options['fields']['field_whsites']['id'] = 'field_whsites';
  $handler->display->display_options['fields']['field_whsites']['table'] = 'field_data_field_whsites';
  $handler->display->display_options['fields']['field_whsites']['field'] = 'field_whsites';
  $handler->display->display_options['fields']['field_whsites']['label'] = 'World Heritage Sites';
  $handler->display->display_options['fields']['field_whsites']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_whsites']['alter']['path'] = 'http://whc.unesco.org/en/statesparties/[title]/';
  $handler->display->display_options['fields']['field_whsites']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_whsites']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_whsites']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'countries/map';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Country Entity Reference */
  $handler = $view->new_display('entityreference', 'Country Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Entity Reference';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_short_name' => 'field_short_name',
    'field_url' => 0,
    'field_media_image' => 0,
    'title' => 0,
    'field_joined_unesco' => 0,
    'field_region' => 0,
    'field_whsites' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['delta_offset'] = '0';
  /* Field: Content: Short name */
  $handler->display->display_options['fields']['field_short_name']['id'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['table'] = 'field_data_field_short_name';
  $handler->display->display_options['fields']['field_short_name']['field'] = 'field_short_name';
  $handler->display->display_options['fields']['field_short_name']['label'] = '';
  $handler->display->display_options['fields']['field_short_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_short_name']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_short_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['countries'] = array(
    t('Master'),
    t('Countries: %1'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Flag'),
    t('Joined UNESCO'),
    t('UN Region'),
    t('World Heritage Sites'),
    t('All'),
    t('Country List'),
    t('<none>'),
    t('<p>List of the 195 Members (and the 8 Associate Members) of UNESCO and the date on which they became members (or Associate Members) of the Organization, as of 23 November 2011</p>
<h3>Members</h3>
<ul class"country_views">
<li id="country_views_list" class="country_views leaf first selected"><a href="/countries/">List</a></li>
<li id="country_views_grid" class="country_views leaf"><a href="/countries/grid">Grid</a></li>
<li id="country_views_map" class="country_views leaf last"><a href="/countries/map">Map</a></li>
</ul>'),
    t('Country'),
    t('Attachment'),
    t('Country Grid'),
    t('<p>List of the 195 Members (and the 8 Associate Members) of UNESCO and the date on which they became members (or Associate Members) of the Organization, as of 23 November 2011</p>
<h3>Members</h3>
<ul>
<li class="leaf first"><a href="/countries/">List</a></li>
<li class="leaf selected"><a href="/countries/grid">Grid</a></li>
<li class="leaf last"><a href="/countries/map">Map</a></li>
</ul>'),
    t('State name'),
    t('Country Map'),
    t('<p>List of the 195 Members (and the 8 Associate Members) of UNESCO and the date on which they became members (or Associate Members) of the Organization, as of 23 November 2011</p>
<h3>Members</h3>
<ul>
<li class="leaf first"><a href="/countries/">List</a></li>
<li class="leaf"><a href="/countries/grid">Grid</a></li>
<li class="leaf last selected"><a href="/countries/map">Map</a></li>
</ul>'),
    t('Country Entity Reference'),
    t('Entity Reference'),
  );
  $export['countries'] = $view;

  $view = new view();
  $view->name = 'country_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'country_map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'country_map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['label'] = '';
  $handler->display->display_options['fields']['field_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$node = menu_get_object();
var_dump($node);
if(isset($node)) {
  return $node->nid;
}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'country_profile' => 'country_profile',
  );

  /* Display: Country map */
  $handler = $view->new_display('block', 'Country map', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '218';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: geo */
  $handler->display->display_options['fields']['field_geo']['id'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['table'] = 'field_data_field_geo';
  $handler->display->display_options['fields']['field_geo']['field'] = 'field_geo';
  $handler->display->display_options['fields']['field_geo']['label'] = '';
  $handler->display->display_options['fields']['field_geo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['block_description'] = 'Country Map';
  $translatables['country_map'] = array(
    t('Master'),
    t('country_map'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Country map'),
    t('Country Map'),
  );
  $export['country_map'] = $view;

  return $export;
}
