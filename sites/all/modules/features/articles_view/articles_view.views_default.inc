<?php
/**
 * @file
 * articles_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function articles_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'latest_articles_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest articles ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest articles ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '40',
  );
  /* Field: Content: PM approach */
  $handler->display->display_options['fields']['field_cat_pm_approach']['id'] = 'field_cat_pm_approach';
  $handler->display->display_options['fields']['field_cat_pm_approach']['table'] = 'field_data_field_cat_pm_approach';
  $handler->display->display_options['fields']['field_cat_pm_approach']['field'] = 'field_cat_pm_approach';
  $handler->display->display_options['fields']['field_cat_pm_approach']['label'] = '';
  $handler->display->display_options['fields']['field_cat_pm_approach']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cat_pm_approach']['delta_offset'] = '0';
  /* Field: Content: Technologies */
  $handler->display->display_options['fields']['field_cat_technologies']['id'] = 'field_cat_technologies';
  $handler->display->display_options['fields']['field_cat_technologies']['table'] = 'field_data_field_cat_technologies';
  $handler->display->display_options['fields']['field_cat_technologies']['field'] = 'field_cat_technologies';
  $handler->display->display_options['fields']['field_cat_technologies']['label'] = '';
  $handler->display->display_options['fields']['field_cat_technologies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cat_technologies']['delta_offset'] = '0';
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
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'articles';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Latest articles ';
  $handler->display->display_options['menu']['name'] = 'devel';
  $export['latest_articles_'] = $view;

  return $export;
}