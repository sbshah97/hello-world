##Getting Started

Brainfuck is an esoteric language created in 1993 by Urban Muller, and notable for its extreme minimalism.It also happens to be fully Turing-complete.  
  
###Commands

It has only 8 simple commands.  
 - > increment the data pointer
 - < decrement the data pointer
 - \+ increment the byte at the data pointer
 - \- decrement the byte at the data pointer
 - . output the byte at the data pointer
 - , accept one byte of input 
 - [ if the byte at data pointer is 0 execution jumps to next matching bracket ]
 - ] if the byte at data pointer is not 0 execution loop backs to matching bracket [
  

###Geting an Interpreter

Lots of interpreters are available.  
Original distribution by Urban Muller can be found [here](http://main.aminet.net/dev/lang/brainfuck-2.lha).  
A simple one is available at [mig-hub/yabi](https://github.com/mig-hub/yabi).  
Compile the interpreter using the respective instructions.

###Running Your Code

After compiling Muller's Interpreter run your program using :  
```
./bfi hello-world.bf
```

Or use [yabi's](https://github.com/mig-hub/yabi) by :
```
./yabi hello-world.bf
```

**Congratulations! You've just run your first Brainfuck Program**
