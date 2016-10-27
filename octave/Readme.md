## Getting Started

### Downloading Octave
1. sudo add-apt-repository ppa:picaso/octave.
1. sudo apt-get update. 
1. sudo apt-get install octave.

### Running "Hello World"
As a trivial example of an executable Octave script, you might create a text file named hello, containing the following lines:

1. #! octave-interpreter-name -qf
1. # a sample Octave program
1. printf ("Hello, world!\n");

(where octave-interpreter-name should be replaced with the full path and name of your Octave binary). 
Note that this will only work if ‘#!’ appears at the very beginning of the file. After making the file executable 
(with the chmod command on Unix systems), you can simply type:

hello

at the shell, and the system will arrange to run Octave as if you had typed:

octave hello

The line beginning with ‘#!’ lists the full path and filename of an interpreter to be run, and an optional initial command line 
argument to pass to that interpreter. The operating system then runs the interpreter with the given argument and the full argument
list of the executed program. The first argument in the list is the full file name of the Octave executable. The rest of the 
argument list will either be options to Octave, or data files, or both. The ‘-qf’ options are usually specified in stand-alone 
Octave programs to prevent them from printing the normal startup message, and to keep them from behaving differently depending on 
the contents of a particular user’s ~/.octaverc file. 
