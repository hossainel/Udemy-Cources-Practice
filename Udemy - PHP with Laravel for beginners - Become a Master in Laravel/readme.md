# Installing Laravel and ruuning it using XAMPP in Ubuntu

### Step 1
- Install Composer
$ sudo curl -s https://getcomposer.org/installer | /opt/lampp/bin/php
### Step 2
- Link up Directory
$ sudo ln -s /opt/lampp/bin/php /usr/local/bin/php
### Step 3
- Move composer Directory
$ sudo mv composer.phar /usr/local/bin/composer
### Step 4
- Install Laravel
$ composer global require "laravel/installer"
### Step 5
- Make New Projedt
$ /home<username>/.config/composer/vendor/bin/laravel new <project_name>
### Step 6
- Goto Project Directory
$ cd /home<username><project_name>
### Step 7
- Start Laravel Server
$ /opt/lampp/bin/php artisan serve
