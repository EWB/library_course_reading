<?php
/**
 * @file
 * library_course_reading.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function library_course_reading_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course_reading|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course_reading';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|course_reading|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function library_course_reading_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course_reading|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course_reading';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_reading_citation',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_reading_citation' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|course_reading|search_result'] = $ds_layout;

  return $export;
}
