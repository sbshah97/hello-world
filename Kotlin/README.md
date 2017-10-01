# Kotlin

[Kotlin](https://kotlinlang.org) is a statically-type language, developed by a team of programmers at JetBrains. Kotlin runs on the Java Virtual Machine and also can be compiled to JavaScript. In May 2017, Kotlin also became a fully supported language on [Android](http://kotlinlang.org/docs/tutorials/kotlin-android.html).

## Getting Started

Kotlin runs on the Java Virtual Machine. Make sure that you have the [JDK](http://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html) installed (The JDK includes the JRE so that need not be installed seperately).

Getting started with Kotlin is very easy with the IntelliJ IDEA. IDEA comes with inbuilt support for Kotlin. You can check that out [here](http://kotlinlang.org/docs/tutorials/getting-started.html)

### Installing Kotlin Compiler

To install the Kotlin Compiler: 
* Dowload the latest release from [Github](https://github.com/JetBrains/kotlin/releases/tag/v1.1.50)
* Unzip the files to a suitable directory.
* Add the `bin` folder to your Environment path.

#### Installing using SDKMAN! on Unix-based Systems
* Install SDKMAN! using the following command:
```bash
curl -s https://get.sdkman.io | bash
```
* Install Kotlin using the following:
```bash
sdk install kotlin
```

### Running "Hello-World"
* The following command compiles the programs along with the Kotlin Runtime Libraries into a .jar package
```bash
kotlinc hello_world.kt -include-runtime -d hello.jar
```
* Run the program using the following:
```bash
java -jar hello.jar
```

To learn more about the Kotlin programming language, visit their [official website](https://kotlinlang.org)
