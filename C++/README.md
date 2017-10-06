## Installation 

## Linux 

Linux already has GNU C++ compiler `g++` for compiling C++ files. So need for any external softwares here. 

### Running on Linux

1. open terminal
2. cd into the folder that contains the `hello-world.cpp` file
3. type `g++ hello-world.cpp`
4. type `g++ sort-num-string-using-quicksort.cc`
5. run the object file output by g++ by running `./a.out`

What happens here is, `g++` takes in the human-readable C++ file and output a machine readable object code file called `a.out`. Then you need to execute this `a.out` file.

## Mac OS

1. open terminal
2. if you did not install Xcode command line tools before paste on this terminal: ```$ xcode-select --install``` otherwise go to step 3 
3. cd into the folder that contains the `hello-world.cpp` file
4. type `g++ hello-world.cpp`
5. run the object file output by g++ by running `./a.out`

What happens here is, `g++` takes in the human-readable C++ file and output a machine readable object code file called `a.out`. Then you need to execute this `a.out` file.

## Windows

Installing Visual Studio Community Edition
* Windows: Install [Visual Studio](http://mingw-w64.org/doku.php/download). 

### Building and running C++ code on Windows

Open **VS201x Native Tools Command Prompt** and `cd` to the folder containing your `hello-world.cpp` file.
After that, enter the following command to compile `hello-world.cpp`.

`g++ hello.cpp -o hello`

If your program has no compilation errors, an executable file that is named `hello.exe` is created.

In the command-prompt window, enter the following command to run the program:

`./hello.exe`

**Congratulations! You've run your first C++ program!**
