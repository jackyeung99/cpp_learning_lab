
# Program Structure

### General Ideas

- Main Difference between Compiled and High Level languages 
    - Python has to handle parsing data types, translating, execution, and memory management which leads to slower execution times
    - Compiled languages require more explicit instructions but can be tuned for high perfomance


### Compiling Code 

- C++ requires a compiler which takes in the C++ source code and converts it to assembly code. We are using g++ whihc is the gnu C++ compiler 

```
g++ myprogram.cpp -o myprogram
```

This command line instruction compiles the source code myprogram.cpp into the output executable file myprogram.o. This can be run using this command 

```
./myprogram
```

