## Getting Started

## Windows

### Installing Visual Studio Community Edition
* Windows: Install [Visual Studio](http://mingw-w64.org/doku.php/download). 

### Building and running C# code
Open **VS201x Native Tools Command Prompt** and `cd` to the folder containing your `hello-world.cs` file.
After that, enter the following command to compile `hello-world.cs`.

`csc hello-world.cs`

If your program has no compilation errors, an executable file that is named `hello-world.exe` is created.

In the command-prompt window, enter the following command to run the program:

`hello-world`

**Congratulations! You've run your first C# program on windows!**

## Linux
### Installing MonoDevelop related tools (compiler and editor)
 * Write in the command-prompt of this followin sentence

On Ubuntu
`sudo apt-get install monodevelop mono-utils`

### Building and running C# code
Open **the native terminal** and `cd` to the folder containing your `hello-world.cs` file.
After that, enter the following command to compile `hello-world.cs`.

`msc hello-world.cs` or `dmsc hello-world.cs`

If your program has no compilation errors, an executable file that is named `hello-world.exe` is created.

In the command-prompt window, enter the following command to run the program:

`mono hello-world.exe`

**Congratulations! You've run your first C# program! on Linux**







## MacOS
### Installing Mono Framework (compiler and editor)
* Download de Mono Framework from [here](http://www.mono-project.com/download/#download-mac)
 
### Building and running C# code
Open **the native MacOs terminal** and `cd` to the folder containing your `hello-world.cs` file.
After that, enter the following command to compile `hello-world.cs`.

`mcs hello-world.cs` 

If your program has no compilation errors, an executable file that is named `hello-world.exe` is created.

In the command-prompt window, enter the following command to run the program:

`mono hello-world.exe`

**Congratulations! You've run your first C# program! on MacOS**