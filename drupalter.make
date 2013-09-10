core = 7.x
api = 2

; Base Themes
; -----------------------------
projects[tao][subdir] = contrib
projects[tao][version] = "3.0-beta4"
projects[rubik][subdir] = contrib
projects[rubik][version] = "4.0-beta8"


; Base modules
; -----------------------------
projects[ctools][subdir] = contrib
projects[ctools][version] = "1.3"

projects[libraries][subdir] = contrib
projects[libraries][version] = "2.1"

projects[diff][subdir] = contrib
projects[diff][version] = "3.2"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = "2.0"

projects[features][subdir] = contrib
projects[features][version] = "2.0-rc3"

projects[token][subdir] = contrib
projects[token][version] = "1.5"

projects[entity][subdir] = contrib
projects[entity][version] = "1.1"
; entity_metadata_no_hook_node_access() should respect that the $node parameter can be a string or an object: http://drupal.org/node/1780646
; Last checked: 2013/07/12
projects[entity][patch][] = https://drupal.org/files/entity_node_access-1780646-179.patch

projects[date][subdir] = contrib
projects[date][version] = "2.6"
; Undefined index: repeat in date_repeat_field_bundles(): http://drupal.org/node/1856306
; Last checked: 2013/07/12
projects[date][patch][] = http://drupal.org/files/fix_undef_index_err-1856306-5.patch

projects[link][subdir] = contrib
projects[link][version] = "1.1"

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = "2.3"

projects[views][subdir] = contrib
projects[views][version] = "3.7"

projects[entityreference][subdir] = contrib
projects[entityreference][version] = "1.x-dev"

projects[references_dialog][subdir] = contrib
projects[references_dialog][version] = "1.x-dev"

projects[field_collection][subdir] = contrib
projects[field_collection][version] = "1.0-beta5"

projects[transliteration][subdir] = contrib
projects[transliteration][version] = "3.1"

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = 1.0-beta3
; https://drupal.org/node/1490664
projects[l10n_update][patch][] = https://drupal.org/files/l10n_update-1490664-fix_pdo_exception-17.patch

projects[field_group][subdir] = contrib
projects[field_group][version] = "1.1"

; WYSIWYG
; ----------------------
projects[ckeditor][subdir] = contrib
projects[ckeditor][version] = "1.13"
; For CkEditor 4.x to work with the latest Asset module version a custom build is needed.
; We include the ckeditor lib with the profile files for usability.
; @see https://drupal.org/node/1943098

; Media
; ----------------------
projects[asset][subdir] = contrib
projects[asset][version] = 1.x-dev

projects[jplayer][subdir] = contrib
projects[jplayer][version] = "2.0-beta1"

libraries[jplayer][download][type] = get
libraries[jplayer][download][url] = http://www.jplayer.org/latest/jQuery.jPlayer.2.4.0.zip
libraries[jplayer][download][directory_name] = jplayer


; Admin & Security
; -----------------------
projects[admin][subdir] = contrib
projects[admin][version] = "2.0-beta3"

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = "3.0-rc4"

projects[workbench][subdir] = contrib
projects[workbench][version] = "1.2"

projects[module_filter][subdir] = contrib
projects[module_filter][version] = "1.7"

projects[flood_control][subdir] = contrib
projects[flood_control][version] = "1.0"

projects[login_destination][subdir] = contrib
projects[login_destination][version] = "1.1"

projects[password_policy][subdir] = contrib
projects[password_policy][version] = "1.3"

projects[scheduler][subdir] = contrib
projects[scheduler][version] = "1.1"


; SEO
; ------------------------
projects[pathauto][subdir] = contrib
projects[pathauto][version] = "1.2"

projects[redirect][subdir] = contrib
projects[redirect][version] = "1.x-dev"

projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = "2.0-rc2"

projects[metatags][subdir] = contrib
projects[metatags][version] = "7.x-1.0-beta7"

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = "7.x-1.5"


