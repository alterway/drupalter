<?php
/**
 * @file
 * drupalter_media.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupalter_media_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'asset-audio-field_asset_audio'
  $field_instances['asset-audio-field_asset_audio'] = array(
    'bundle' => 'audio',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'jplayer',
        'settings' => array(
          'autoplay' => 0,
          'backgroundColor' => 0,
          'mode' => 'single',
          'muted' => 0,
          'preload' => 'metadata',
          'repeat' => 'none',
          'solution' => 'html, flash',
          'volume' => 80,
        ),
        'type' => 'jplayer_player',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'jplayer',
        'settings' => array(
          'autoplay' => 0,
          'backgroundColor' => 0,
          'mode' => 'playlist',
          'muted' => FALSE,
          'preload' => 'metadata',
          'repeat' => 'none',
          'solution' => 'html, flash',
          'volume' => 80,
        ),
        'type' => 'jplayer_player',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_audio',
    'label' => 'Audio',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'asset/audio',
      'file_extensions' => 'mp3 ogg mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'asset-audio-field_asset_desc'
  $field_instances['asset-audio-field_asset_desc'] = array(
    'bundle' => 'audio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'asset-fichier-field_asset_desc'
  $field_instances['asset-fichier-field_asset_desc'] = array(
    'bundle' => 'fichier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'asset-fichier-field_asset_fichier'
  $field_instances['asset-fichier-field_asset_fichier'] = array(
    'bundle' => 'fichier',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_fichier',
    'label' => 'Fichier',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'asset/file',
      'file_extensions' => 'pdf',
      'max_filesize' => '196 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'asset-image-field_asset_desc'
  $field_instances['asset-image-field_asset_desc'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'asset-image-field_asset_image'
  $field_instances['asset-image-field_asset_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'asset_image_full',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'asset_image_full',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'asset_image_small',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'assets/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'asset-image-field_asset_image_copyright'
  $field_instances['asset-image-field_asset_image_copyright'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'small' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_image_copyright',
    'label' => 'Copyright',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'asset-image-field_asset_image_description'
  $field_instances['asset-image-field_asset_image_description'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'small' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_image_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'asset-video-field_asset_desc'
  $field_instances['asset-video-field_asset_desc'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tooltip' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'asset-video-field_asset_video_desc'
  $field_instances['asset-video-field_asset_video_desc'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'small' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'tooltip' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_video_desc',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'asset-video-field_asset_video_file'
  $field_instances['asset-video-field_asset_video_file'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'emvideo',
        'settings' => array(
          'height' => 360,
          'width' => 640,
        ),
        'type' => 'emvideo_video',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'emvideo',
        'settings' => array(
          'height' => 360,
          'width' => 640,
        ),
        'type' => 'emvideo_video',
        'weight' => 0,
      ),
      'small' => array(
        'label' => 'hidden',
        'module' => 'emvideo',
        'settings' => array(
          'height' => 180,
          'width' => 320,
        ),
        'type' => 'emvideo_video',
        'weight' => 0,
      ),
      'tooltip' => array(
        'label' => 'hidden',
        'module' => 'emvideo',
        'settings' => array(
          'height' => 180,
          'width' => 320,
        ),
        'type' => 'emvideo_video',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'asset',
    'field_name' => 'field_asset_video_file',
    'label' => 'Video',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'emvideo',
      'settings' => array(),
      'type' => 'emvideo_text',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio');
  t('Copyright');
  t('Description');
  t('Fichier');
  t('Image');
  t('Video');

  return $field_instances;
}
