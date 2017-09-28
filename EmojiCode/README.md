# Getting Started


## Installing Emojicode



### Mac OS X and Linux Machines
- Visit the [Emojicode instillation page](http://www.emojicode.org/docs/guides/install.html)

- Find the current version and copy and paste the commands for the "Magic Installation".

- This should look like where the X.X.X is the target version and YYYYYYY is the OS:
```
$ curl -o emojicode.tar.gz -L https://github.com/emojicode/emojicode/releases/download/vX.X.X/Emojicode-X.X.X-YYYYYYY.tar.gz \
&& tar -xzf emojicode.tar.gz && rm emojicode.tar.gz \
&& cd Emojicode-X.X.X-YYYYYYY && ./install.sh \
&& cd .. && rm -r Emojicode-X.X.X-YYYYYYY

```

- This should give you a few instructions in the installer, and just like that Emojicode is installed!

- If you are on a Linux machine you may need to install a font pack to get emojis to display properly.
```
$ sudo apt-get install ttf-ancient-fonts
```

## Running "Hello World"
- This step is the same for all operating systems.
- Navigate to the directory containing `helloworld.emojic` (you can do this from the terminal or command line using the `cd` command).
- Type in the following
```
$ emojicodec helloworld.emojic
$ emojicode helloworld.emojib
```

**Congratulations! You've run your first Emojicode program!**
