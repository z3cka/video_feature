<?php

/**
 * Implementation of hook_strongarm().
 */
function video_feature_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = 0;

  $export['comment_anonymous_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_video';
  $strongarm->value = '3';

  $export['comment_controls_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = '4';

  $export['comment_default_mode_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_video';
  $strongarm->value = '2';

  $export['comment_default_order_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';

  $export['comment_default_per_page_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = '1';

  $export['comment_form_location_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '0';

  $export['comment_preview_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = '0';

  $export['comment_subject_field_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '2';

  $export['comment_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'comment_settings' => '5',
    'menu' => '-1',
    'path' => '6',
    'og_nodeapi' => '1',
  );

  $export['content_extra_weights_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ffmpeg_wrapper_path';
  $strongarm->value = '/usr/bin/ffmpeg';

  $export['ffmpeg_wrapper_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_mediaplayer';
  $strongarm->value = array(
    'clip' => array(
      'autoPlay' => 'true',
      'autoBuffering' => 'false',
      'scaling' => 'fit',
      'start' => '',
      'duration' => '',
      'accelerated' => 'false',
      'bufferLength' => '',
      'provider' => '',
      'fadeInSpeed' => '',
      'fadeOutSpeed' => '',
      'linkUrl' => '',
      'linkWindow' => '_blank',
      'live' => 'false',
      'cuePointMultiplier' => '',
    ),
    'controls' => array(
      'backgroundGradient' => 'medium',
      'progressGradient' => 'medium',
      'bufferGradient' => 'none',
      'sliderGradient' => 'none',
      'autoHide' => 'fullscreen',
      'play' => 'true',
      'volume' => 'true',
      'mute' => 'true',
      'time' => 'true',
      'stop' => 'false',
      'playlist' => 'false',
      'fullscreen' => 'true',
      'scrubber' => 'true',
    ),
    'canvas' => array(
      'height' => '375',
      'width' => '500',
      'backgroundImage' => '',
      'backgroundRepeat' => 'repeat',
      'backgroundGradient' => 'low',
      'border' => '',
      'borderRadius' => '',
    ),
  );

  $export['flowplayer3_mediaplayer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_mediaplayer_file';
  $strongarm->value = 'flowplayer-3.0.7.swf';

  $export['flowplayer3_mediaplayer_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_mediaplayer_stream_plugin';
  $strongarm->value = 'flowplayer.rtmp-3.0.2.swf';

  $export['flowplayer3_mediaplayer_stream_plugin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_palette';
  $strongarm->value = array(
    'backgroundColor' => '#000000',
    'controlbarbackgroundColor' => '#000000',
    'timeColor' => '#01daff',
    'durationColor' => '#ffffff',
    'progressColor' => '#015b7a',
    'bufferColor' => '#6c9cbc',
    'sliderColor' => '#000000',
    'buttonColor' => '#889aa4',
    'buttonOverColor' => '#92b2bd',
  );

  $export['flowplayer3_palette'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_product_key';
  $strongarm->value = '';

  $export['flowplayer3_product_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_scheme';
  $strongarm->value = '#000000,#000000,#01daff,#ffffff,#015b7a,#6c9cbc,#000000,#889aa4,#92b2bd';

  $export['flowplayer3_scheme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_video';
  $strongarm->value = 'form-d9d611ccd7b698fa0c5d6f50b161878d';

  $export['form_build_id_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_always_add_js';
  $strongarm->value = 1;

  $export['swftools_always_add_js'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_check_media';
  $strongarm->value = 1;

  $export['swftools_check_media'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_embed_method';
  $strongarm->value = 'swfobject2_replace';

  $export['swftools_embed_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_flv_display';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_flv_display'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_flv_display_list';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_flv_display_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_grant_access_extensions';
  $strongarm->value = 'swf flv xml mp3 jpg jpeg png';

  $export['swftools_grant_access_extensions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_grant_access_to_private_files';
  $strongarm->value = 0;

  $export['swftools_grant_access_to_private_files'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_html_alt';
  $strongarm->value = '<p>You are missing some Flash content that should appear here! Perhaps your browser cannot display it, or maybe it did not initialize correctly.</p>';

  $export['swftools_html_alt'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_image_display_list';
  $strongarm->value = '0';

  $export['swftools_image_display_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_media_display_list';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_media_display_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_media_url_dummy';
  $strongarm->value = '';

  $export['swftools_media_url_dummy'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_mp3_display';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_mp3_display'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_mp3_display_list';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_mp3_display_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_align';
  $strongarm->value = 'l';

  $export['swftools_params_align'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_allowfullscreen';
  $strongarm->value = 1;

  $export['swftools_params_allowfullscreen'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_allowscriptaccess';
  $strongarm->value = 'sameDomain';

  $export['swftools_params_allowscriptaccess'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_bgcolor';
  $strongarm->value = '#FFFFFF';

  $export['swftools_params_bgcolor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_loop';
  $strongarm->value = 1;

  $export['swftools_params_loop'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_menu';
  $strongarm->value = 0;

  $export['swftools_params_menu'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_play';
  $strongarm->value = 1;

  $export['swftools_params_play'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_quality';
  $strongarm->value = 'autohigh';

  $export['swftools_params_quality'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_salign';
  $strongarm->value = 'tl';

  $export['swftools_params_salign'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_scale';
  $strongarm->value = 'showall';

  $export['swftools_params_scale'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_swliveconnect';
  $strongarm->value = 'default';

  $export['swftools_params_swliveconnect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_version';
  $strongarm->value = '7';

  $export['swftools_params_version'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_params_wmode';
  $strongarm->value = 'opaque';

  $export['swftools_params_wmode'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_player_path';
  $strongarm->value = '';

  $export['swftools_player_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_playlist_caching';
  $strongarm->value = 'here';

  $export['swftools_playlist_caching'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_playlist_path';
  $strongarm->value = 'playlists';

  $export['swftools_playlist_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_swf_display';
  $strongarm->value = '0';

  $export['swftools_swf_display'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3g2';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_3g2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3g2_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_3g2_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3gp';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_3gp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_3gp_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_3gp_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_asf';
  $strongarm->value = 'video_play_windowsmedia';

  $export['video_extension_asf'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_asf_flash_player';
  $strongarm->value = '';

  $export['video_extension_asf_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_avi';
  $strongarm->value = 'video_play_windowsmedia';

  $export['video_extension_avi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_avi_flash_player';
  $strongarm->value = '';

  $export['video_extension_avi_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dcr';
  $strongarm->value = 'video_play_dcr';

  $export['video_extension_dcr'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dcr_flash_player';
  $strongarm->value = '';

  $export['video_extension_dcr_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dir';
  $strongarm->value = 'video_play_dcr';

  $export['video_extension_dir'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_dir_flash_player';
  $strongarm->value = '';

  $export['video_extension_dir_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_divx';
  $strongarm->value = 'video_play_divx';

  $export['video_extension_divx'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_divx_flash_player';
  $strongarm->value = '';

  $export['video_extension_divx_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_f4v';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_f4v'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_f4v_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_f4v_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_flv';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_flv'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_flv_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_flv_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mov';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_mov'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mov_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_mov_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mp4';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_mp4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mp4_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_mp4_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpeg';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_mpeg'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpeg_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_mpeg_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpg';
  $strongarm->value = 'video_play_flv';

  $export['video_extension_mpg'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_mpg_flash_player';
  $strongarm->value = 'swftools';

  $export['video_extension_mpg_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogg';
  $strongarm->value = 'video_play_theora';

  $export['video_extension_ogg'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogg_flash_player';
  $strongarm->value = '';

  $export['video_extension_ogg_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogv';
  $strongarm->value = 'video_play_theora';

  $export['video_extension_ogv'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_ogv_flash_player';
  $strongarm->value = '';

  $export['video_extension_ogv_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_rm';
  $strongarm->value = 'video_play_realmedia';

  $export['video_extension_rm'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_rm_flash_player';
  $strongarm->value = '';

  $export['video_extension_rm_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_swf';
  $strongarm->value = 'video_play_flash';

  $export['video_extension_swf'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_swf_flash_player';
  $strongarm->value = '';

  $export['video_extension_swf_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_wmv';
  $strongarm->value = 'video_play_windowsmedia';

  $export['video_extension_wmv'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_extension_wmv_flash_player';
  $strongarm->value = '';

  $export['video_extension_wmv_flash_player'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'calendar' => FALSE,
  );

  $export['views_defaults'] = $strongarm;
  return $export;
}
