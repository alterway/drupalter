# drupalter

Alter Way drupal distribution
This is a distribution for internal use of Alter Way drupal team
We always use this distribution for create new project

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

## Contribute
---------------------------

You're interested in contributing to this distribution?

Here are the basic steps:

fork `drupalter`

1. Clone your fork
2. Hack away
3. If you are adding new functionality, document it in the Wiki or this README
4. If necessary, rebase your commits into logical chunks, without errors
5. Push the branch up to GitHub
6. Send a pull request to the alterway/drupalter project

We'll do our best to get your changes in!

[GitHub]: https://github.com/alterway/drupalter
