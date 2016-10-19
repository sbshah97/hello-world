# hello-world

>This project shows you how to write the legendary fundamental "hello-world" in
>all languages that you can think of.


## Prerequisites and usage
For each hello-world download that language's compiler and run the file.

### Examples: 

### For *python*:
- (assuming you have python. But everyone has python)
```bash
python hello_world.py 
```

### For *go*:
##### Running hello-world

```bash
go run hello-world.go
```

#### Building hello-world into an executable
```bash
go build hello-world.go
./hello-world
```

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
- Run the 

## Contributing

- I am always looking for more contributions.
- If you're wondering how to contribute do check out [Contributing](https://github.com/salman-bhai/hello-world/blob/master/CONTRIBUTING.md)

## License

- The software is registered under the [MIT License](https://github.com/salman-bhai/hello-world/blob/master/LICENSE)
