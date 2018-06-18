# Prolog

### Windows
[Download] http://www.swi-prolog.org/download/stable/bin/swipl-w64-764.exe and install.

### Mac
[Download] http://www.swi-prolog.org/download/stable/bin/SWI-Prolog-7.6.4.dmg and install.

### Linux
Linux
- Open a terminal.
- Add ppa:swi-prolog/stable to your system by running this command:
`sudo add-apt-repository ppa:swi-prolog/stable`

- Update the package, since it is often out of date:
`sudo apt-get update`

- Install SWI-Prolog:
`sudo apt-get install swi-prolog`


## Running "Hello World"

### Windows and Mac:
- Open the `hello_world.pl` file.
- Type `hello_world.`

### Linux:
- Navigate to the directory containing `hello_world.pl`.
- Type `swipl` to open SWI-prolog.
- Type `consult(hello_world).` This should return `true` if done right.
- Type `hello_world.`

