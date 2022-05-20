# Installing Laravel and ruuning it using XAMPP in Ubuntu

### Step 1
- sudo curl -s https://getcomposer.org/installer | /opt/lampp/bin/php
### Step 2
- sudo ln -s /opt/lampp/bin/php /usr/local/bin/php
### Step 3
- sudo mv composer.phar /usr/local/bin/composer
### Step 4
- composer global require "laravel/installer"
### Step 5
- /home/<username>/.config/composer/vendor/bin/laravel new <project_name>
### Step 6
- cd /home/<username>/<project_name>
### Step 7
- /opt/lampp/bin/php artisan serve
