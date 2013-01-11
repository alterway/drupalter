# drupalter

Temporary project for the Alter Way Drupal distribution for administrations.

## Drupal installation

To build a drupal installation from the profile makefile you should follow the following steps :

#### 1 - Clone the https://github.com/alterway/drupalter repository
#### 2 - Checkout the branch you want to use
#### 3 - Make a local copy of build-drupalter.make
#### 4 - Edit the new makefile and add the path to the local "Drupalter" repository
The final ``build-drupalter-local.make`` should look like something like this :

> ; Stub Makefile
>
> core = 7.x
>
> api = 2
>
> projects[] = drupal
>
> projects[drupalter][type] = profile
>
> projects[drupalter][download][type] = "git"
>
> projects[drupalter][download][branch] = "master"
>
> projects[drupalter][download][url] = /var/projects/drupalter

#### 5 - Download Drupal with : ``drush make build-drupalter-local.make SITENAME``

If you want to install from another branch, just change it in build-drupalter-local.make .

Have fun !
