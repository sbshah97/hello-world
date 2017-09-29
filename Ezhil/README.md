Ezhil
=====

Introduction
============

```
எழில்: தமிழ் நிரலாக்க மொழி; முதன்முறை கணிப்பொறி நிரல் எழுதுகிற 
தமிழ் மாணவர்களுக்கு இது உதவும்.

எழில் மொழி  குழந்தைகளும்  , பள்ளி மாணவர்களும்  கட்ட்ருகொள்ளும் வகையில் உருவாக்கப்பட்ட ஒரு கணினி நிரல் மொழி.
எழில் ஒரு செயல்முறை நோக்கு - (Imperative ) கணினி மொழி. இதை ரூபி , பைதான் போன்ற மொழிகளின் நடையில் அமைக்கபட்டது.
எழில் மொழியில் நிபந்தனை கட்டளைகள், மடக்கு கட்டளைகள் என்றும்  எழுதலாம்; இதில் செயல்பாடுகள், செயல்குருகள் என்று கணினி நிரல்களை 
பிரிக்கலாம். எழில்  மென்பொருள் அத்யாயம்  எண்  v0.8. பைதான் மொழி அடிப்படையில் உருவாக்கப்பட்டது.

Ezhil-Lang : (Ezhil, is a fun Tamil programming language for K-12) Ezhil is 
a procedural language with dynamic types, like Ruby/Python. Ezhil has a 
pascal-like syntax, with for-end, while-end, if-elseif-else-end statements,
break, continue and def-end for defining functions. Ezhil language is 
implemented in a handwritten scanner and parser using the Python programming 
language. Latest version of Ezhil-Language is v0.8.
```

You can find more information about ezhil in https://github.com/Ezhil-Language-Foundation/Ezhil-Lang


Installation
============
Prerequisites : python,pip

To install python - https://github.com/salman-bhai/hello-world/blob/master/Python/README.md

To install pip

This is the same for all operating systems. 

Download [get-pip.py](https://bootstrap.pypa.io/get-pip.py) to a folder on your computer. 

Open a command prompt window and navigate to the folder containing get-pip.py. 

Then run python get-pip.py. This will install pip.

```python get-pip.py```

You need to install pip for installing easier Ezhil installation

Run the following command to install Ezhil

```pip install ezhil```


## Running "Hello World"
- This step is the same for all operating systems. 
- Navigate to the directory containing `helloworld.n` (you can do this from the terminal or command line using the `cd` command). 
- Type in the following

``` 
$ ezhili helloworld.n 
```

**Congratulations! You've run your first Ezhil program!**

You can run Ezhil in Interactive Mode also.

Interactive Mode
================

```bash
$ ezhili
எழில் 1>> 1 + 5
6
எழில் 2>> பதிப்பி "வணக்கம்! எழில் அழைக்கிறது"
வணக்கம்! எழில் அழைக்கிறது
எழில் 3>> exit()
```

Usage
=====
For usage, try,
```bash
$ ezhili --help
usage: எழில் [-h] [-debug] [-tamilencoding TAMILENCODING] [-profile] [-stdin]
             [-stacksize STACKSIZE]
             [files [files ...]]

positional arguments:
  files

optional arguments:
  -h, --help            show this help message and exit
  -debug                enable debugging information on screen
  -tamilencoding TAMILENCODING
                        option to specify other file encodings; supported
                        encodings are TSCII, and UTF-8
  -profile              profile the input file(s)
  -stdin                read input from the standard input
  -stacksize STACKSIZE  default stack size for the Interpreter
```

