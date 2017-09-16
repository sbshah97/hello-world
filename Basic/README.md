# Writing a program in BASIC that prints Hello World

## Downloading FreeBasic

FreeBASIC is a free/open source (GPL), BASIC compiler for Microsoft Windows, DOS and Linux. In order to download this compiler follow the steps provided below:

### Windows x64
------------
1. Download the latest FreeBASIC-x.xx.x-win64.zip package
2. Extract it where you like, for example at C:\%ProgramFiles%\FreeBASIC (no further installation required to use fbc).
3. Unless you already have a source code editor or IDE, you should install one too, as FreeBASIC itself does not include one. 

An IDE can be used to write and save .bas files and to launch the FreeBASIC Compiler to compile them. The following IDEs are known to explicitly support FreeBASIC:
* FBIDE
* FBEdit

Having said that, I'd like to add that I used Sublime Text editor to write my program and it worked just fine.

### Linux
------
1. Download the latest FreeBASIC-x.xx.x-linux-x86.tar.gz (32bit) or 2. FreeBASIC-x.xx.x-linux-x86_64.tar.gz (64bit) package
Extract the archive, for example by doing right-click -> Extract Here, or manually in a terminal:

```
$ cd Downloads
$ tar xzf FreeBASIC-x.xx.x-linux-x86.tar.gz
```

3. The FreeBASIC compiler can be used from where it was extracted. Usually it is installed into the /usr/local system directory though, so that the fbc program is available through-out the whole system. To do that, run the included installation script:

```
$ cd FreeBASIC-x.xx.x-linux-x86
$ sudo ./install.sh -i
```

## Grab

The install.sh script can also be given a path as in ./install.sh -i /usr if you prefer to install into a directory other than the default /usr/local. This default is a good choice though, as it avoids mixing with the content of /usr which is usually managed by the distribution's packaging tool.

FreeBASIC requires several additional packages to be installed before it can be used to compile executables. In general, these are:

> binutils
> libc development files (installing gcc will typically install these too)
> gcc
> libncurses development files
> X11 development files (for FB graphics programs)
> libffi development files (for the ThreadCall keyword)
> gpm (general purpose mouse) daemon and libgpm (only needed for GetMouse support in the Linux console)

The actual package names to install vary depending on the GNU/Linux distribution.

For native development (32bit FB on 32bit system, or 64bit FB on 64bit system):

### Debian/Ubuntu:
gcc
libncurses5-dev
libffi-dev
libgl1-mesa-dev
libx11-dev libxext-dev libxrender-dev libxrandr-dev libxpm-dev

### Fedora:
gcc
ncurses-devel
libffi-devel
mesa-libGL-devel
libX11-devel libXext-devel libXrender-devel libXrandr-devel libXpm-devel
OpenSUSE:
gcc
ncurses-devel
libffi46-devel
xorg-x11-devel

For 32bit development on a 64bit system:

### Debian/Ubuntu:

gcc-multilib
lib32ncurses5-dev
libx11-dev:i386 libxext-dev:i386 libxrender-dev:i386 libxrandr-dev:i386 libxpm-dev:i386

### OpenSUSE:

gcc-32bit
ncurses-devel-32bit
xorg-x11-devel-32bit
xorg-x11-libX11-devel-32bit
xorg-x11-libXext-devel-32bit
xorg-x11-libXrender-devel-32bit
xorg-x11-libXpm-devel-32bit
libffi46-devel-32bit

4. Unless you already have a text editor or IDE, you should install one too, as FreeBASIC itself does not include one. An IDE can be used to write and save .bas files and to launch the FreeBASIC Compiler to compile them. The following IDEs are known to explicitly support FreeBASIC:
Geany

To uninstall FreeBASIC from /usr/local, you can run the install.sh script again, but with the -u option: sudo ./install.sh -u

## Running your first program 

### Windows

1. Open up any editor capable of saving text files and type in the source code provided in the hello-world.bas file.

2. Save your file with a .bas extension.

3. To compile manually, you should append the FreeBASIC installation directory to your PATH environment variable, separating it from previous entries using a semi-colon. In our case, we save the path as 'fbc'. Now you can simply use "fbc" from the command prompt, instead of always having to type in the full path (e.g. "C:\FreeBASIC\fbc.exe").

Then, open a console/command prompt/MS DOS prompt, in the same directory as your program by holding down the SHIFT key while right clicking in the directory where your program file is. To compile your program, type in the following command on the command line:

C:\mystuff\myprogram\> fbc hello-world.bas

and hello-world.exe will be created in the same directory.

4. In order to run hello-world.exe you can simply double click on the icon.

### Linux

If the install.sh script was successfully executed with enough priviledges, the compiler binary should have been copied /usr/local/bin/fbc, allowing any user access to the compiler from any directory.

To compile the "Hello, world!" program, we use the hello-world.bas file present in this folder. Navigate to the directory where you've stored the hello-world.bas program file, and type the following command on the shell,

fbc hello-world.bas

and a ./hello executable file will be created in the examples/misc directory.

Congratulations, you just ran your first BASIC program!