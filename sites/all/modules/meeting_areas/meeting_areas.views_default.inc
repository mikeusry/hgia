<?php
/**
 * @file
 * meeting_areas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function meeting_areas_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'meeting_rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting Rooms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Space Capacity Chart';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_seating_banquet' => 'field_seating_banquet',
    'field_seating_board' => 'field_seating_board',
    'field_service_class' => 'field_service_class',
    'field_seating_hollow' => 'field_seating_hollow',
    'field_seating_reception' => 'field_seating_reception',
    'field_seating_theater' => 'field_seating_theater',
    'field_seating_u' => 'field_seating_u',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seating_banquet' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seating_board' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_class' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seating_hollow' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seating_reception' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seating_theater' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seating_u' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '(click each row header to sort or the name of the room for more details)';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Room';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Banquet */
  $handler->display->display_options['fields']['field_seating_banquet']['id'] = 'field_seating_banquet';
  $handler->display->display_options['fields']['field_seating_banquet']['table'] = 'field_data_field_seating_banquet';
  $handler->display->display_options['fields']['field_seating_banquet']['field'] = 'field_seating_banquet';
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_seating_banquet']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_seating_banquet']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_seating_banquet']['field_api_classes'] = 0;
  /* Field: Content: Board Room */
  $handler->display->display_options['fields']['field_seating_board']['id'] = 'field_seating_board';
  $handler->display->display_options['fields']['field_seating_board']['table'] = 'field_data_field_seating_board';
  $handler->display->display_options['fields']['field_seating_board']['field'] = 'field_seating_board';
  $handler->display->display_options['fields']['field_seating_board']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_seating_board']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_seating_board']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_seating_board']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_seating_board']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_seating_board']['field_api_classes'] = 0;
  /* Field: Content: Class Room */
  $handler->display->display_options['fields']['field_service_class']['id'] = 'field_service_class';
  $handler->display->display_options['fields']['field_service_class']['table'] = 'field_data_field_service_class';
  $handler->display->display_options['fields']['field_service_class']['field'] = 'field_service_class';
  $handler->display->display_options['fields']['field_service_class']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_service_class']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_service_class']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_service_class']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_service_class']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_service_class']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_service_class']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_service_class']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_service_class']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_service_class']['field_api_classes'] = 0;
  /* Field: Content: Hollow Square */
  $handler->display->display_options['fields']['field_seating_hollow']['id'] = 'field_seating_hollow';
  $handler->display->display_options['fields']['field_seating_hollow']['table'] = 'field_data_field_seating_hollow';
  $handler->display->display_options['fields']['field_seating_hollow']['field'] = 'field_seating_hollow';
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_seating_hollow']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_seating_hollow']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_seating_hollow']['field_api_classes'] = 0;
  /* Field: Content: Reception */
  $handler->display->display_options['fields']['field_seating_reception']['id'] = 'field_seating_reception';
  $handler->display->display_options['fields']['field_seating_reception']['table'] = 'field_data_field_seating_reception';
  $handler->display->display_options['fields']['field_seating_reception']['field'] = 'field_seating_reception';
  $handler->display->display_options['fields']['field_seating_reception']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_seating_reception']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_seating_reception']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_seating_reception']['field_api_classes'] = 0;
  /* Field: Content: Theater */
  $handler->display->display_options['fields']['field_seating_theater']['id'] = 'field_seating_theater';
  $handler->display->display_options['fields']['field_seating_theater']['table'] = 'field_data_field_seating_theater';
  $handler->display->display_options['fields']['field_seating_theater']['field'] = 'field_seating_theater';
  $handler->display->display_options['fields']['field_seating_theater']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_seating_theater']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_seating_theater']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_seating_theater']['field_api_classes'] = 0;
  /* Field: Content: U-Shape */
  $handler->display->display_options['fields']['field_seating_u']['id'] = 'field_seating_u';
  $handler->display->display_options['fields']['field_seating_u']['table'] = 'field_data_field_seating_u';
  $handler->display->display_options['fields']['field_seating_u']['field'] = 'field_seating_u';
  $handler->display->display_options['fields']['field_seating_u']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_seating_u']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_seating_u']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_seating_u']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_seating_u']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_seating_u']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'meeting_space' => 'meeting_space',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['meeting_rooms'] = $view;

  return $export;
}
