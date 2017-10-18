# Installation

First, you need `npm` and `node`. You can install the latest version from [Node's site](https://nodejs.org/en/).

Once installed, you can use `npm` to install Purescript, Pulp (Purescript's build tool) and Bower (a dependency manager):

```bash
npm install -g purescript pulp bower
```

Then, in this folder, run:

```bash
bower install
pulp build
```

Finally:

```bash
pulp run

> Hello, world!
```
