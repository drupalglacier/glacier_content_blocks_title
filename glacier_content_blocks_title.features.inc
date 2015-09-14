<?php
/**
 * @file
 * glacier_content_blocks_title.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function glacier_content_blocks_title_paragraphs_info() {
  $items = array(
    'title' => array(
      'name' => 'Title',
      'bundle' => 'title',
      'locked' => '1',
    ),
  );
  return $items;
}
