# Scala

## Getting Started

Before you start installing Scala on your machine, you must have Java 1.8 or greater installed on your computer. Type `java -version` to check the Java version.



### Installing Scala binaries

* Windows: Install [Scala binaries](http://www.scala-lang.org/download/).
* Linux: Install  
# - Ubuntu and other Debian-based distro  
                   `echo "deb https://dl.bintray.com/sbt/debian /" | sudo tee -a /etc/apt/sources.list.d/sbt.list`  
                    `sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 2EE0EA64E40A89B84B2DF73499E82A75642AC823`  
                    `sudo apt-get update`  
                    `sudo apt-get install sbt`  
 # - Red Hat Enterprise Linux and other RPM-based distro  
                 `curl https://bintray.com/sbt/rpm/rpm | sudo tee/etc/yum.repos.d/bintray-sbt-rpm.repo`  
                 `sudo yum install sbt`  
* MacOS: Install  
#- [Using Homebrew](https://brew.sh/)
                    `$ brew install sbt`  
#- [Using Macports](https://www.macports.org/)
                    `$ port install sbt`
 

### Running Scala code
Open a command prompt and `cd` to the folder containing your `hello-world.scala` file.

In the command-prompt window, enter the following command to run the program:

`scala hello-world.scala`

**Congratulations! You've run your first Scala program!**
