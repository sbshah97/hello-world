# Fortran 90

## Installation

If you don’t have GNU Fortran compiler, install it as shown below.

### Linux

```
$ sudo apt-get install gfortran
```

Test if the Fortran compiler installed correctly:
```
$ gfortran
```

### MacOS

Using MacPorts or Homebrew:
```
$ sudo port selfupdate
$ sudo port install gcc
```
Or:
```
$ brew install gcc
```

Test if the Fortran compiler installed correctly:
```
$ gfortran
```

### Windows

Using Scoop:
```
$ scoop install gcc
```

Otherwise, download the MinGW installer [here](https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download) and unzip the file to `C:\MinGW`
To change the PATH so you can use it on the command line, right click the My Computer icon and select Properties. Go to the Advanced tab, and click the Enviroment Settings button. Change the top box, the user PATH, by clicking Edit, and then at the end, adding
```
[other PATH stuff];C:\MinGW\bin
```

Click Ok, Ok, and Ok to save and exit.

Then, to install gfortran, go to a command window and type
```
$ mingw-get install gfortran
```

To test if the Fortran compiler installed correctly:
```
$ gfortran
```

## Running

### Linux/MacOS/

1. Open terminal

2. `cd` into the folder that contains the `hello-world.f90` file

3. To compile:
```
$ gfortran hello-world.f90
```

4. To run the object file output from gfortran:
```
$ ./a.out
```


### Windows

1. Open a command window

2. `cd` into the folder that contains the `hello-world.f90` file

3. To compile:
```
$ gfortran hello-world.f90
```

4. To run the object file output from gfortran:
```
$ a.exe
```

