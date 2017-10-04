# Python

## Getting Started

### Downloading Python
Visit the [Python downloads page](https://www.python.org/downloads/) and select your OS. You may notice that there are two versions of Python--2.x.x and 3.x.x. Version 2 is the legacy version, whereas v3 is the present and future version of Python. If you're just getting started with Python, you'll most likely want the latest stable release of v3. Download the appropriate version of the installer (x86/32-bit or x64/64-bit) for your system.

### Should I choose Python 2 or Python 3?
[Python 2 vs Python 3](https://wiki.python.org/moin/Python2orPython3)
Short version: Python 2.x is legacy, Python 3.x is the present and future of the language.

If you can do exactly what you want with Python 3.x, great! There are a few minor downsides, such as very slightly worse library support and the fact that some current Linux distributions and Macs still use 2.x as default, but as a language Python 3.x is definitely mature and ready for use.

If you want to use Python 3.x, but you are afraid to because of a dependency, it's probably worthwhile doing some research first.

It is useful to always read the documentation of the packages that you are using, so as to ensure that you are using the right tool for the right job.

### Installing Python

#### Windows

1. Run the installer.
2. Check the box at the bottom of the first window that says "Add Python 3.x to PATH". This will allow you to run your Python programs from anywhere on your computer.
3. Click "Install Now".

Verify that the installation was successful by opening the command prompt and typing `python --version`. You should see the version of Python you installed. If you get a message that `'python' is not recognized as an internal or external command, operable program, or batch file` then it means the Python executable was not correctly added to the system PATH. You can fix this by following the steps below:

1. Copy the path of your Python installation (eg `C:\Python35`).
2. Go to *Control Panel* → *System* → *Advanced* → *Environment Variables*
3. Scroll down the lists of variables until you find one called `Path` (if one does not exist, press `New` to create one). Append the path you copied earlier to the end of the list. If there are previous entries, separate them from your Python directory with a semicolon.
4. You may need to restart your computer for changes to take effect.

#### Mac OS

Mac OS comes pre-installed with Python 2.7

For up-to-date installation instructions or if you want to install Python 3, please check python documentation [here](https://docs.python.org/3/using/mac.html#getting-and-installing-macpython).

Alternatively you can install python3 via homebrew as follows:

1. Open terminal.
2. if you did not install homebrew before paste on this terminal: ```$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"```
otherwise go to step 3.
3. ``` $ brew install python3 ```


#### Linux

Python 2 and Python 3 comes preinstalled on most Linux distributions, and is available as a package on most others.

For up-to-date instructions on compiling or packaging python, please refer to python documentation [here](https://docs.python.org/3/using/unix.html#getting-and-installing-the-latest-version-of-python).

### Running "Hello World"
This step is the same for all operating systems. Navigate to the directory containing `hello-world.py` (you can do this from the terminal or command line using the `cd` command). Type `python hello-world.py` and the console should print `Hello, world!`

**Congratulations! You've run your first Python program!**
