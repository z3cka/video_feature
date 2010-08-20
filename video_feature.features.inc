<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function video_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function video_feature_imagecache_default_presets() {
  $items = array(
    'video_thumbnail_list' => array(
      'presetname' => 'video_thumbnail_list',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '480',
            'height' => '270',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 'center',
            'ypos' => 'center',
            'alpha' => '100',
            'path' => 'play_button_overlay.png',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function video_feature_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('Enables users to share/upload videos, especially in groups/communities.'),
      'has_title' => '1',
      'title_label' => t('Video Title'),
      'has_body' => '1',
      'body_label' => t('Video Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
