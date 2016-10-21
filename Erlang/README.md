# Getting Started

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

**Congratulations! You've run your first Erlang program!**
