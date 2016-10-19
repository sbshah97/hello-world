# Getting Started


## Installing Java
```

$ sudo add-apt-repository ppa:webupd8team/java
$ sudo apt-get update
$ sudo apt-get install oracle-java8-installer

```
### Windows

### Mac OS X

### Linux

- Open Applicaction -> Accessories -> Terminal

- Type the following on the command line. 

`$ sudo apt-get install openjdk-8-jdk`

`$ apt-cache search jdk`

- (Note: openjdk-8-jdk is symbolically used here. You can choose the JDK version as per your requirement.)

`$ export JAVA_HOME=/usr/lib/jvm/java-7-openjdk`

- (Note: "/usr/lib/jvm/java-7-openjdk" is symbolically used here just for demostration. You should use your path as per your installation.)

- For "PATH" (Environment Variable) type command as shown below, in "Terminal" using your installation path...

` $ export PATH=$PATH:/usr/lib/jvm/java-7-openjdk/bin`

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
