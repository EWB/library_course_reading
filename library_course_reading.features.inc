<?php
/**
 * @file
 * library_course_reading.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_course_reading_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_course_reading_node_info() {
  $items = array(
    'course_reading' => array(
      'name' => t('Course Reading'),
      'base' => 'node_content',
      'description' => t('Readings for courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Use this form to create a course reading for materials (journals and other sources) subscribed to by SLU libraries.   Use the library <a href="/library/reserves">Reserves Request Form</a> for all other materials.
All course reading submissions must comply with the St. Lawrence University Libraries <a href="/library/reserves">Reserve Policy</a>. Please contact <a href="mailto:rcourtney@stlawu.edu">Rhonda Courtney</a>, Access Services Librarian, if you have any questions.'),
    ),
  );
  return $items;
}
