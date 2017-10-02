# Hello World in Verilog
## Installing Iverilog

### Ubuntu/Linux

* Update the local repository cache

        $ sudo apt-get update

* Install (update) the Icarus Verilog package

        $ sudo apt-get install verilog

### Windows
* [Download the windows installer](http://bleyer.org/icarus/) for your system.
* Install and set the path environment variable to the bin folder of the iverilog installation directory. 


## Running the Hello World program
* Go to the location of your program and compile it by

        iverilog HelloWorld.v -o hello.vvp

* Run the compiled file by

         vvp hello.vv

