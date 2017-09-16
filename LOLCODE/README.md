## Getting Started

[LOLCODE](http://lolcode.org/) is an esoteric programming language created in 2007 by Adam Lindsay, researcher at the Computing Department of Lancaster University and inspired by *lolspeak*.

You can find the LOLCODE specification [here](https://github.com/justinmeza/lolcode-spec).

### Installing lci: LOLCODE Interpreter

Head to [lci README](https://github.com/justinmeza/lci/blob/master/README) or [LOLCODE official page](http://lolcode.org/) and follow instructions.

You can also follow instructions below, you'll need the `cmake` package for this.

```
$ git clone https://github.com/justinmeza/lci.git
$ cd lci
$ cmake .
$ make
$ sudo make install
```

### Running "Hello World"

Navigate to the directory containing `HAI_WORLD.lol` (you can do this from the terminal or command line using the `cd` command). Type `lci HAI_WORLD.lol` and the console should print `HAI WORLD!!!1!`.

**Congratulations! You've run your first LOLCODE script!**
