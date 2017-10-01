# PHP

## Windows
### Installation

Go to https://www.apachefriends.org/index.html, download and install XAMPP.

### Running

#### Web hosting

1. Deploy `hello-world.php` to your web hosting
2. Open your browser
3. Navigate to `http://<your-domain>/hello-world.php`


#### Running in the console

1. Open a terminal emulator/command prompt
2. Navigate to the directory where `hello-world.php` is stored
3. Run `php hello-world.php`

#### Running in the browser

1. Copy `hello-world.php` into the `htdocs` directory of your XAMPP installation
2. Open XAMPP control panel
3. Start Apache
4. Open your browser
5. Navigate to `http://localhost/hello-world.php`

## Ubuntu

### Installation
1. Open terminal and type:
	`$ sudo apt-get install apache2 php7.0 libapache2-mod-php7.0`
2. To check if the installation was successful:
	`$ php -r 'echo "\n\nYour PHP installation is working fine.\n\n\n";'`

### Running

#### Web hosting

1. Deploy `hello-world.php` to your web hosting
2. Open your browser
3. Navigate to `http://<your-domain>/hello-world.php`

#### Running in the terminal
1. To run hello-world.php in terminal type:
	`$ php7.0 hello-world.php`

#### Running locally on browser
1. Copy hello-world.php to folder /var/www/html:
	`$ cp hello-world.php /var/www/html`
2. libapache2-mod-php7.0 is the module responsible for executing php scripts on the apache server.
3. To verify if the above module is loaded, Open terminal and type:
	`$ a2query -m php7.0`
4. If the module is not loaded, type :
	`$ sudo a2enmod php7.0`
5. After the module is loaded, restart the apache server:
	`$ sudo service apache2 restart`
6. Open the browser and navigate to:
	`http://localhost/hello-world.php`

## Mac OS

### Installation
1. Since apache and PHP come packaged with Max OS no need to install manually again.

### Alternative install PHP with homebrew

1. Open terminal
2. Paste on terminal ```$  /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)" ```
3. ``` $ brew install homebrew/php/php70 ```
4. ``` $ php -v ```

### Running

#### Web hosting

1. Deploy `hello-world.php` to your web hosting
2. Open your browser
3. Navigate to `http://<your-domain>/hello-world.php`

#### Running in the terminal
1. To run hello-world.php in terminal type:
	`$ php hello-world.php`

#### Running locally on browser
1. Copy hello-world.php to folder - `/Library/WebServer/Documents/`
2. Start apache server:
	`$ apachectl start`
3. Edit file - /etc/apache2/httpd.conf with root privileges.
     Uncomment the line:
	`#LoadModule php[x]_module libexec/apache2/libphp[x].so`
	(here [x] is the current installed version of php on OS X)
4. Restart apache server:
	`$ apachectl restart`
5. Open the browser and navigate to:
	`http://localhost/hello-world.php`

