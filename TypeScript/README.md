# TypeScript

TypeScript is a typed superset of JavaScript that compiles to plain JavaScript.
>[Offical website](https://www.typescriptlang.org/)

## Installing TypeScript

To install TypeScript, you have to use Node.js:

```npm install -g typescript```

Or you can install TypeScript's Visual Studio plugins, which you can easily find on their website.

## Running TypeScript

Once you have your ```hello-world.ts```, you have to compile it by running the following code at the command line:

```tsc hello-world.ts```

This will give you hello-world.js. To run this one, you have to make a simple html file that looks something like this:

```
<html>
    <body>
        <script src="hello-world.js"></script>
    </body>
</html>
```

To finally run this one, double click it or drag it in your internet browser (i.e. Chrome).

Alternatively, if you only want to print 'Hello, World!' to the console you can use:

 ```console.log("Hello, World");```