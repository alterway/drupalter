; Stub Makefile

core = 7.x
api = 2

projects[] = drupal

; Download Instal profile
; ------------------------
projects[drupalter][type] = profile
projects[drupalter][download][type] = "git"
projects[drupalter][download][branch] = "master"
projects[drupalter][download][url] = /var/projects/drupalter
