## Getting Started

### Installing Ada compiler

* Windows: You can install *gcc* using the [Cygwin project](https://cygwin.com/). When prompted for which packages to install, search for `gcc-ada`.
* Linux: You can install *gcc* with your package manager (if it is not bundled) - `apt-get install gcc`, `yum install gcc` or similar.
* Mac OS: You can install *gcc* via brew. First, install [Brew](http://brew.sh/). Then, do a `brew install gcc`. Verify that gcc is installed correctly by typing `gcc --version` on the command line.

### Building and running C code

Type `gcc -c hello_world.adb` to compile the code and `gnatmake hello_world.adb` to generate the executable. Then type `./hello_world` to run the executable.


**Congratulations! You've run your first Ada program!**