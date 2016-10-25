# INSTALL GROOVY (Mac OSX, Linux, Cygwin, Solaris or FreeBSD)

To install Groovy, is highly recommended to visit the official Groovys website, which's from the steps below were taken: http://www.groovy-lang.org/download.html

Simply open a new terminal and enter:

```ssh
$ curl -s get.sdkman.io | bash
```
Follow the instructions on-screen to complete installation.
Open a new terminal or type the command:

```ssh
$ source "$HOME/.sdkman/bin/sdkman-init.sh"
```
Then install the latest stable Groovy:

```ssh
$ sdk install groovy
```
After installation is complete and you've made it your default version, test it with:

```ssh
$ groovy -version
```
That's all there is to it!

P.S: Java is required

## INSTALL GROOVY (WINDOWS)

If you're using Windows, just go to the downloads page and get the binary: http://www.groovy-lang.org/download.html

## RUNNING THE SCRIPT

Once you've already done the process above, open a new terminal (or prompt), navigate through command line to the directory where the script is and run it by using the simply command: 

```ssh
$ groovy hello-world.groovy
```
