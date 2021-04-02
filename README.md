# Intercom Take Home Task

# Requirements
- Any C++ 11 compiler.
- CMake with minimum version 3.20.0.
- Internet in order to run the bash commands.
- Git installed.

# Run code
- Use a bash terminal.
- Clone the repo.
```console
foo@bar:~$ git clone https://github.com/mckkentmwk/IntercomTakeHomeTask
```
- Go to `IntercomTakeHomeTask` folder.

```console
foo@bar:~$ cd IntercomTakeHomeTask
```

- Run the following commands in this order.

    1.- Clone the [googletest](https://github.com/google/googletest) and [json](https://github.com/nlohmann/json) dependencies.
    ```console
    foo@bar:~$ make configure
    ```
    
    2.-  Generate native makefiles.
    ```console
    foo@bar:~$ make init
    ```
    
    3.-  Compile/build project.
    ```console
    foo@bar:~$ make build
    ```
    
    4.-  At this point we generated 2 executables, one for unit test of the class I created, the other for the main function.

    4.1.- To run unit tests.
    ```console
    foo@bar:~$ make test
    ```
        
    4.2.-    To run the problem using `customers.txt` as input file, output will be save in `output.txt`.
    
    ```console
    foo@bar:~$ make run
    ```
