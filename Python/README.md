## Getting Started

### Downloading Python
Visit the [Python downloads page](https://www.python.org/downloads/) and select your OS. You may notice that there are two versions of Python--2.x.x and 3.x.x. Version 2 is the legacy version, whereas v3 is the present and future version of Python. If you're just getting started with Python, you'll most likely want the latest stable release of v3. Download the appropriate version of the installer (x86/32-bit or x64/64-bit) for your system.

### Installing Python
#### Windows
1. Run the installer.
1. Check the box at the bottom of the first window that says "Add Python 3.x to PATH". This will allow you to run your Python programs from anywhere on your computer.
1. Click "Install Now".

Verify that the installation was successful by opening the command prompt and typing `python --version`. You should see the version of Python you installed. If you get a message that `'python' is not recognized as an internal or external command, operable program, or batch file` then it means the Python executable was not correctly added to the system PATH. You can fix this by following the steps below:

1. Copy the path of your Python installation (eg `C:\Python35`).
1. Go to *Control Panel* → *System* → *Advanced* → *Environment Variables*
1. Scroll down the lists of variables until you find one called `Path` (if one does not exist, press `New` to create one). Append the path you copied earlier to the end of the list. If there are previous entries, separate them from your Python directory with a semicolon.
1. You may need to restart your computer for changes to take effect.

#### Mac OS X

Mac OS X comes pre-installed with Python 2.7

For up-to-date installation instructions or if you want to install Python 3, please check python documentation [here](https://docs.python.org/3/using/mac.html#getting-and-installing-macpython).

#### Linux

Python 2 and Python 3 comes preinstalled on most Linux distributions, and is available as a package on most others.

For up-to-date instructions on compiling or packaging python, please refer to python documentation [here](https://docs.python.org/3/using/unix.html#getting-and-installing-the-latest-version-of-python).

### Running "Hello World"
This step is the same for all operating systems. Navigate to the directory containing `hello-world.py` (you can do this from the terminal or command line using the `cd` command). Type `python hello-world.py` and the console should print `Hello, world!`

**Congratulations! You've run your first Python program!**
