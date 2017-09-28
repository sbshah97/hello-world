# Getting Started

### Installing Visual Studio Community Edition

* Install [Visual Studio](https://www.visualstudio.com/downloads/)
* After Installing Visual Studio Community Edition, you will need to add "Visual F#". This can easily be found under the new project wizard, under F# if it isn't installed.

### Building and running F# code

Open "Developer Command Prompt for VS201X" and `cd` to the folder containing your `Hello World.fsx` file.
After that, run the following command to compile `Hello World.fsx`.

`fsc "Hello World.fsx"`

if everything works, an file named "Hello World.exe" is created. Run it from the command prompt by running

`Hello World.exe`

You can stop the program by hitting "CTRL" + "c"

## Setting Up and Using F# on MacOS

### Option 1: Visual Studio Code
Visual Studio Code is a free, open source, cross platform source code editor supporting a lot of languages. 

F# is supported by the [Ionide](https://code.visualstudio.com/download) project and is a nice integration.

Install [Visual Studio Code](http://ionide.io/) for Mac
Install the [latest version of Mono](http://www.mono-project.com/download/#download-mac) from the Mono project

Add Mono `/bin` folder to your `PATH: export`
`PATH=$PATH:/Library/Frameworks/Mono.framework/Versions/Current/bin/`

Go back to VS Code, press `Cmd+P` and enter the following to install the Ionide package. `fext install Ionide-fsharp`

### Option 2: Install F# (64-bit) from source
To use the F# command-line compiler and tools on Mac OSX in 64-bit mode:

* [Get and build a 64-bit installation of the runtime used by F# from source.](http://www.mono-project.com/docs/compiling-mono/mac/)
Set the “–prefix” flag, e.g. “–prefix=/mono64”
`git clone https://github.com/mono/mono`
`cd mono`
`./autogen.sh --prefix=/mono64 --enable-nls=no`
`make`
`sudo make install`

* [Compile F# from source](https://github.com/fsharp/fsharp/blob/master/README.md)
 Set the “–prefix” flag, e.g. “–prefix=/mono64”
`git clone https://github.com/fsharp/fsharp`
`cd fsharp`
`./autogen.sh --prefix=/mono64`
`make`
`sudo make install`

* When you run mono, use `/mono64/bin/mono` and put `/mono64/bin` on your path. Adjust other applications that launch mono to use this location.

* Xamarin Studio and MonoDevelop run applications in 32-bit mode by default. You can configure additional runtimes under Preferences > .NET Runtimes to benefit from 64-bit execution.

View other options to install  [F# on your MacOS here](http://fsharp.org/use/mac/) 

## Setting Up and Using F# on Linux

###Option 1: Install from your Linux distribution’s package manager
When being used as .NET language, F# requires a .NET runtime. On Linux this runtime is Mono or .NET Core. Most Linux distributions include a version of Mono in their repositories. However, these versions are typically pretty old. Therefore, it is highly recommended that you add the official Mono package repository to your package manager, as described below. This makes it easy to get updates or uninstall, if required.

*  [Ubuntu/Mint](http://fsharp.org/use/linux/#ubuntu) 
* [Debian ](http://fsharp.org/use/linux/#debian) 
* [CentOS/RHEL/Amazon/Fedora](http://fsharp.org/use/linux/#centos) 
* [Gentoo/Sabayon/Funtoo/Calculate](http://fsharp.org/use/linux/#gentoo) 

Once installed, see [installing a smart editor](http://fsharp.org/use/linux/#smart-editor) and the  [Linux and Cross-Platform Development Guide.](http://fsharp.org/guides/mac-linux-cross-platform/)

Note that the Mono runtime is available for a wide variety of CPU architectures, not just x86 and ARM. All of these support F#.

### Highly recommended: Install a smart editor

Like other strongly typed languages, F# can benefit tremendously from an editor that has support for the language. This makes smart auto-completion and compiling while you edit possible, which increases the discoverability of features and programmer productivity in general.

### Option 1:  Visual Studio Code
F# is supported by the [Ionide](https://code.visualstudio.com/download) project and is a nice integration.

Install [Visual Studio Code](https://code.visualstudio.com/download) for Linux
Press `Ctrl+P` and enter the following to install the Ionide package for VS Code.
`ext install Ionide-fsharp`

### Option 2: JetBrains
Install [JetBrains Rider](https://www.jetbrains.com/rider/download/#section=linux) for Linux.
[Follow these instructions.](http://www.mono-project.com/download/#download-lin-ubuntu)
Then install packages `mono-complete`, `msbuild` and `fsharp`.

` sudo apt-get update`
` sudo apt-get install mono-complete msbuild fsharp`

(optional) Install latest `dotnet-dev-x.y.z` [.NET Core packages](https://www.microsoft.com/net/core#linuxubuntu) 
