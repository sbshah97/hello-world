# Getting Started

**Table of contents**
- [Windows](#windows)
- [Linux](#linux)
- [MacOS](#macos)

### Windows

## Check if Erlang command line interpreter is installed on your system
- If the Erlang command line interpreter is installed on your system, it should
display a path similar to below.
- This will only work on Windows 7 and above.


```
C:\> where erlc
C:\Program Files\erl9.1\bin\erlc.exe
```

## Installing Erlang
1. Download and run the installer found [here](https://www.erlang.org/downloads).
2. Add the installed binaries to your path
  1. Copy the path of your erlang installation. (eg `C:\Program Files\erl9.1\bin`)
  2. Go to Control Panel → System → Advanced System Settings → Environment variables
  3. Scroll down the list of System Variables until you find one called `Path`.
  (If one does not exist, press `New` to create one).
  4. Add the path to your Erlang installation at the end. If there are previous entries,
  separate them using a semicolon.
  5. You may need to restart your Command Prompt and/or computer.
3. All done!


## Compile Erlang program
- Navigate to the directory containing `helloworld.erl` (you can do this from the
command line using the `cd` command).

Compile the erlang hello world which will create the executable (`helloworld.beam`).
```
$ erlc helloworld.erl
```

## Runing "Hello World"
- Make sure your in the directory containg the `helloworld.beam` file.
- Type in the following
```
$ erl -noshell -s helloworld start -s init stop
```

- In alternative, you could execute erlang from command line as shown below. It will print Hello World! too
```
$ erl -noshell -eval 'io:fwrite("Hello, World!\n"), init:stop().'
```

***

### Linux

## Check if Erlang command line interpreter is installed on your system
- If Erlang command line interpreter is installed, it should display the path as following on terminal


```
$ whereis erlc
erlc: /usr/bin/erlc /usr/share/man/man1/erlc.1.gz
```

## Installing Erlang Compiler
- Type the following on the command line.
```
$ sudo apt-get install erlang-ic
```

## Compile Erlang program
Compile the erlang hello world which will create the executable.
```
$ erlc helloworld.erl

$ ls
helloworld.beam  helloworld.erl
```

## Running "Hello World"
- Navigate to the directory containing `helloworld.erl` (you can do this from the terminal or command line using the `cd` command).
- Type in the following
```
$ erl -noshell -s helloworld start -s init stop
```

- In alternative, you could execute erlang from command line as shown below. It will print Hello World! too
```
$ erl -noshell -eval 'io:fwrite("Hello, World!\n"), init:stop().'
```

***

### MacOS

## Installing Erlang Compiler
- To install using Homebrew, use the following command
```
$ brew install erlang
```

- Or you can find download packages including many useful Erlang tools, [here](https://www.erlang-solutions.com/resources/download.html).

## Compile Erlang program
Compile the erlang hello world which will create the executable.
```
$ erlc helloworld.erl

$ ls
helloworld.beam  helloworld.erl
```

## Running "Hello World"
- Navigate to the directory containing `helloworld.erl` (you can do this from the terminal or command line using the `cd` command).
- Type in the following
```
$ erl -noshell -s helloworld start -s init stop
```

- In alternative, you could execute erlang from command line as shown below. It will print Hello World! too
```
$ erl -noshell -eval 'io:fwrite("Hello, World!\n"), init:stop().'
```

**Congratulations! You've run your first Erlang program!**
