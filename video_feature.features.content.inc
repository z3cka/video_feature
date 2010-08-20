<?php

/**
 * Implementation of hook_content_default_fields().
 */
function video_feature_content_default_fields() {
  $fields = array();

  // Exported field: field_emvideo_3rd_1
  $fields['video-field_emvideo_3rd_1'] = array(
    'field_name' => 'field_emvideo_3rd_1',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'video_thumbnail_list_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'video_video',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '500',
      'video_height' => '375',
      'video_autoplay' => 1,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '480',
      'thumbnail_height' => '270',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'bliptv' => 'bliptv',
        'google' => 'google',
        'myspace' => 'myspace',
        'ustream' => 'ustream',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
        'archive' => 0,
        'dailymotion' => 0,
        'guba' => 0,
        'imeem' => 0,
        'lastfm' => 0,
        'livevideo' => 0,
        'metacafe' => 0,
        'revver' => 0,
        'sevenload' => 0,
        'spike' => 0,
        'tudou' => 0,
        'twistage' => 0,
        'ustreamlive' => 0,
        'voicethread' => 0,
        'yahoomusic' => 0,
        'zzz_custom_url' => 0,
      ),
      'emthumb' => 0,
      'emthumb_label' => 'Embedded Video custom thumbnail',
      'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the Embedded Video thumbnail is called for, overriding any automatic thumbnails by custom providers.',
      'emthumb_max_resolution' => '0',
      'emimport_image_path' => '',
      'emthumb_custom_alt' => 0,
      'emthumb_custom_title' => 0,
      'emthumb_store_local_thumbnail' => 1,
      'emthumb_start_collapsed' => 0,
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Embedded Video',
      'weight' => '-2',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_file_video_1
  $fields['video-field_file_video_1'] = array(
    'field_name' => 'field_file_video_1',
    'type_name' => 'video',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'video_thumbnail_list__video_nodelink',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'swftools_no_file',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'video_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp4 mpeg avi mpg wmv flv mov',
      'file_path' => 'videos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'default_video_thumb' => NULL,
      'default_dimensions' => '640x480',
      'default_player_dimensions' => '640x480',
      'autoconversion' => 0,
      'autothumbnail' => 'auto_fallback',
      'label' => 'Upload Video',
      'weight' => '-4',
      'description' => '',
      'type' => 'uploadfield_widget',
      'module' => 'uploadfield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Embedded Video');
  t('Upload Video');

  return $fields;
}
