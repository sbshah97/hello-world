# Getting Started

## Linux

### Installing Java
The latest stable release of Clojure requires Java 1.6 or greater. Install the [appropriate release for your operating system](http://www.oracle.com/technetwork/java/javase/downloads/java-archive-downloads-javase6-419409.html). You'll then need to download the [Java Development Kit](http://www.oracle.com/technetwork/java/javase/downloads/jdk8-downloads-2133151.html).

### Installing Clojure
Clojure code compiles to Java bytecode, which runs on the Java Virtual Machine. With Java installedd, you're ready to install Clojure. Visit the [downloads](https://clojure.org/community/downloads) page of the [Clojure website](https://clojure.org) and download Clojure.

### Installing Leiningen
Leiningen is a Clojure build tool.
*OSX* With [homebrew](https://brew.sh/) installed, run `brew install leiningen` from the command line.
*Linux or Windows* Visit the [installation](https://leiningen.org/#install) part of the Leiningen website.

## Running "Hello World"
`cd` into the `hello` directory. Now run `lein run`. It should output `"Hello, world!"`.

**Congratulations! You've run your first Clojure program!**
