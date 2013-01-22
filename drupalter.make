core = 7.x
api = 2

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
projects[entityreference] = contrib
projects[references_dialog] = contrib

; WYSIWYG
projects[ckeditor][subdir] = contrib
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6/ckeditor_3.6.6.zip"
libraries[ckeditor][directory_name] = "ckeditor"

; The CkEditor library should go in the libraries directory of the profile.
; Unfortunatelly the current version of this module doesn't support it.
; cf. http://drupal.org/node/1063482
libraries[ckeditor][destination] = "modules/contrib/ckeditor"


; Media
projects[asset][subdir] = contrib


; Admin
projects[admin_menu][subdir] = contrib


; SEO
projects[pathauto][subdir] = contrib
