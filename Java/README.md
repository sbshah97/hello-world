# Getting Started


## Installing Java


### Windows
(Note: It is recommended, before you proceed with online installation you may want to disable your Internet firewall. In some cases the default firewall settings are set to reject all automatic or online installations such as the Java online installation. If the firewall is not configured appropriately it may stall the download/install operation of Java under certain conditions. Refer to your specific Internet firewall manual for instructions on how to disable your Internet Firewall.)

- Visit the [Java downloads page](https://www.java.com/en/download/manual.jsp)

- Click on 'Windows Online'

- The File Download dialog box appears prompting you to run or save the download file
	- Click 'Run' to run installer
	- When installation process starts. Click 'Install' button to accept license terms and to continue with the installation
	- Follow the instruction on the installation wizard
	- Click 'Close' on the last dialog and it will complete Java installation process


### Mac OS X
- Visit the [Java downloads page](http://www.oracle.com/technetwork/java/javase/downloads/)

- Download the 'jre-8u65-macosx-x64.pkg' file

- Launch the .pkg file

- Double click on the package icon to start installation wizard

- Follow the instruction on the installation wizard

- After installation has completed, a confirmation screen will appears. Click 'Close' to finish the installation process


### Linux
```
$ sudo add-apt-repository ppa:webupd8team/java
$ sudo apt-get update
$ sudo apt-get install oracle-java8-installer

```

- Open Applicaction -> Accessories -> Terminal

- Type the following on the command line. 

`$ sudo apt-get install openjdk-8-jdk`

`$ apt-cache search jdk`

- (Note: openjdk-8-jdk is symbolically used here. You can choose the JDK version as per your requirement.)

`$ export JAVA_HOME=/usr/lib/jvm/java-8-openjdk`

- (Note: "/usr/lib/jvm/java-7-openjdk" is symbolically used here just for demostration. You should use your path as per your installation.)

- For "PATH" (Environment Variable) type command as shown below, in "Terminal" using your installation path...

` $ export PATH=$PATH:/usr/lib/jvm/java-8-openjdk/bin`

- (Note: "/usr/lib/jvm/java-7-openjdk" is symbolically used here just for demostration. You should use your path as per your installation.)

- Check for "open jdk" installation, just type command in "Terminal" as shown below

` $ javac -version`

## Running "Hello World"
- This step is the same for all operating systems. 
- Navigate to the directory containing `helloworld.java` (you can do this from the terminal or command line using the `cd` command). 
- Type in the following
``` 
$ javac helloworld.java
$ java helloworld
```

**Congratulations! You've run your first Java program!**