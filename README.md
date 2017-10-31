# C
C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations. By design, C provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, including operating systems, as well as various application software for computers ranging from supercomputers to embedded systems.
# hello-world

>This project shows you how to write the legendary fundamental "hello-world" in
>all languages that you can think of.


## Prerequisites and usage
For each hello-world download that language's compiler and run the file.

## Structure
The hello-world code for each language is in its own directory. This directory also contains a specific README.md with instructions on how to run the code.

## Running projects via Docker:

### Running the container
- Make sure you have [docker.io](https://www.docker.com/) installed on your system by running `docker -v`, which should log the current version of *docker* installed.
- Run `docker run -v $(pwd):/home/docker -w /home/docker -it --rm <image_name> /bin/bash` to run an interactive container.
- Compile and run your desired program

### Docker hello-world:
- After installing [Docker](https://www.docker.com/), simply run `docker run hello-world`.
- This should create a container which displays a **hello-world** message.

### Finding your desired image:
- Goto the [docker hub](https://hub.docker.com/).
- Search for the language/environment you want to run.
- Choose any image in the list.
- Run the [command mentioned above](https://github.com/akram-rameez/hello-world/blob/master/README.md#running-the-container) by replacing the **<image_name>** with the corresponding image.

## Contributing

- I am always looking for more contributions.
- If you're wondering how to contribute do check out [Contributing](https://github.com/salman-bhai/hello-world/blob/master/CONTRIBUTING.md)

## License

- The software is registered under the [MIT License](https://github.com/salman-bhai/hello-world/blob/master/LICENSE)
