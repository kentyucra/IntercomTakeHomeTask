# Intercom Take Home Task

# Requirements
- Any C++ 11 compiler.
- CMake with minimum version 3.20.0.

# Run code
- Use a bash terminal.
- Clone the repo.
```console
foo@bar:~$ git clone https://github.com/mckkentmwk/intercomquestion
```
- Go to `intercomquestion` folder.

```console
foo@bar:~$ cd intercomquestion
```

- Run the following commands in this order, check [Makefile]()

    1. Generate native makefiles.
    ```console
    foo@bar:~$ make init
    ```
    2. Compile/build project.
    ```console
    foo@bar:~$ make build
    ```
    3. At this point we generated 2 executables, one for unit test of the class I created, the other for the main functon.

        3.1. To run unit tests.

        ```console
        foo@bar:~$ make test
        ```
        3.2. To run the problem using `customers.txt` as input file, output will be save in `output.txt`.
        ```console
        foo@bar:~$ make run
        ```