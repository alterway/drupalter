<?php
/**
 * @file
 * drupalter_wysiwyg.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function drupalter_wysiwyg_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'wysiwyg' => array(
      'name' => 'wysiwyg',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => '#D3D3D3',
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'NumberedList\',\'BulletedList\',\'Link\',\'Unlink\',\'Outdent\',\'Indent\'],
    [\'SpecialChar\',\'PasteText\',\'PasteFromWord\',\'Blockquote\'],
    [\'asset_image\',\'asset_audio\',\'asset_video\',\'asset_fichier\',\'assetSearch\'],
    [\'RemoveFormat\',\'SelectAll\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'br',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'asset' => array(
            'name' => 'asset',
            'desc' => 'Media assets',
            'path' => '%base_path%profiles/drupalter/modules/contrib/asset/ckeditor/',
            'buttons' => array(
              'asset_audio' => array(
                'label' => 'Asset: Audio',
                'icon' => 'buttons/AddSound.png',
              ),
              'asset_image' => array(
                'label' => 'Asset: Image',
                'icon' => 'buttons/AddImage.png',
              ),
              'asset_video' => array(
                'label' => 'Asset: Video',
                'icon' => 'buttons/AddVideo.png',
              ),
              'asset_fichier' => array(
                'label' => 'Asset: Fichier',
                'icon' => 'buttons/AddDocument.png',
              ),
              'assetSearch' => array(
                'label' => 'Assets library',
                'icon' => 'search.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'wysiwyg' => 'Wysiwyg',
      ),
    ),
  );
  return $data;
}
