# Getting Started

### Linux

## Check if Elixir command line interpreter is installed on your system
- If Elixir command line interpreter is installed, it should display the path as following on terminal
```
$ whereis elixir
iex: /usr/local/bin/elixir
```

## Installing Elixir Compiler
- Type the following on the command line (For ubuntu like systems).
```
$ sudo apt-get install elixir
```

- Type the following on the command line for MacOS systems

  * Homebrew
  ```
  $ brew update && brew install elixir
  ```
  
  * Macports
  ```
  $ sudo port install elixir
  ```
- Type the following on the command line for Fedora 22 (and newer)
```
$ dnf install elixir
```

- Type the following on the command line for Arch Linux (Community repo)
```
$ pacman -S elixir
```
- Type the following on the command line for Gentoo
```
$ emerge --ask dev-lang/elixir
```
## Running "Hello World"
- Navigate to the directory containing `hello_world.ex` (you can do this from the terminal or command line using the `cd` command).
- Type in the following
```
$ elixir hello_world.ex
Hello World
```

**Congratulations! You've run your first Elixir program!**
