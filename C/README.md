## Getting Started

### Installing C compiler
* Windows: You can install the [Mingw compiler](http://mingw-w64.org/doku.php/download). Alternatively, you can also use the C compiler that comes with Visual Studio (if you have it installed already).
* Linux: You can install gcc with your package manager (if it is not bundled) - `apt-get install gcc`, `yum install gcc` or similar.
* Mac OS: You can use either the XCode C compiler (if you have XCode installed), or install *gcc* via brew.

First, install [Brew](http://brew.sh/). Then, do a `brew install gcc`. Verify that gcc is installed correctly by typing `gcc --version` on the command line.

### Building and running C code
If you use Mingw/GCC/Xcode on Windows/Linux/Mac OS, type `gcc -o hello-world C/hello-world.c` to build the code. Then, type `./hello-world` to run the executable.

#### Windows
If you use the Visual Studio compiler, navigate to the directory which contains your C code, then type `cl hello-world.c` to build the code. To run the executable, type `hello-world`.

**Congratulations! You've run your first C program!**
