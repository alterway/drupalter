core = 7.x
api = 2

; Base Themes
projects[] = tao
projects[] = rubik

; Base modules
projects[ctools][subdir] = contrib
projects[libraries][subdir] = contrib
projects[diff][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[features][subdir] = contrib
projects[token][subdir] = contrib
projects[entity][subdir] = contrib
projects[date][subdir] = contrib
projects[link][subdir] = contrib
projects[jquery_update][subdir] = contrib
projects[views][subdir] = contrib
projects[entityreference][subdir] = contrib
projects[references_dialog][subdir] = contrib
projects[field_collection][subdir] = contrib
projects[email][subdir] = contrib
projects[transliteration][subdir] = contrib
projects[l10n_update][subdir] = contrib
projects[field_group][subdir] = contrib



; WYSIWYG
projects[ckeditor][subdir] = contrib
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6/ckeditor_3.6.6.zip
libraries[ckeditor][directory_name] = ckeditor

; The CkEditor library should go in the libraries directory of the profile.
; Unfortunatelly the current version of this module doesn't support it.
; cf. http://drupal.org/node/1063482
libraries[ckeditor][destination] = "modules/contrib/ckeditor"


; Media
projects[asset][subdir] = contrib
projects[jplayer][subdir] = contrib
libraries[jplayer][download][type] = get
libraries[jplayer][download][url] = http://www.jplayer.org/latest/jQuery.jPlayer.2.4.0.zip
libraries[jplayer][download][directory_name] = jplayer


; Admin & Security
projects[admin][subdir] = contrib
projects[admin_menu][subdir] = contrib
projects[module_filter][subdir] = contrib
projects[flood_control][subdir] = contrib
projects[login_destination][subdir] = contrib
projects[password_policy][subdir] = contrib


; SEO
projects[pathauto][subdir] = contrib
projects[redirect][subdir] = contrib
projects[transliteration][subdir] = contrib


; PATCHES
; Localisation Update
; - throws an SQL exception on install: http://drupal.org/node/1434122, http://drupal.org/node/1567372
; Last checked: 2013/03/05
projects[l10n_update][patch][] = http://drupal.org/files/1567372-l10n_update-aegir.patch

; Entity API
; Trying to get property of non-object in entity_metadata_no_hook_node_access(): http://drupal.org/node/1879714
; Last checked: 2013/03/12
projects[entity][patch][] = http://drupal.org/files/entity-verify-type-of-node-1879714-0.patch

; Date (Date Repeat Field)
; Undefined index: repeat in date_repeat_field_bundles(): http://drupal.org/node/1856306
; Last checked: 2013/03/19
projects[date][patch][] = http://drupal.org/files/fix_undef_index_err-1856306-5.patch
