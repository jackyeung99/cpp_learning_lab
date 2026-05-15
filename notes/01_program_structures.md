
# Program Structure

To understand how to write 'good' c++ code lets examine the general structure of files and how they contribute to a general application. This will also be contrasted to python 

One of the main advantages for python is the simplicity we simply have one script for which we call and the interpreter handles the rest
run script (.py) -> interpreter executes top to bottom

c++ execution is a 'low level language' which forces us the user to explicitly write out each step. c++ applications/programs generally follow these steps
Headers(.h//hpp) -> source file(.cpp) -> compiler -> Object file(.0) -> linker -> executable 

## Source Files (`.cpp`)
C source code belong in .cpp files. These are the main file types which contain all of the logic needed for a file. You can think of this similar to a .py file


## Header Files (`.h` / `.hpp`)
Header files explicitly describe all of the code that exists in a file and their signatures. Header files do not contain the actual logic within the function instead just the definitions. They ussualy contain information such as (function definitions, class definitions, structs, enums, constants, type aliases*, templates ).

Headers exists because each .cpp file is compiled independently. headers allow us to mention code in file a in file b. 

* Each (.cpp) file contains its own header file
* Headers can contain other header files

Headers define a dependency graph of a program 


## Preprocessor Directives
These are instructions for the code before it is compiled annd is typically denoted by a (.i file). These file prepare your source code before the compiler actually reads C++. They can copy files together, include/exlude code, and perfrom text substituions

```cpp
#include
#define
#ifdef
#ifndef
#pragma
```
The preprocessor works on text input not C++ and acts more as a file/text editor then a compiler

### `#include`

#include tells the preprocesser how to share code between files. It is a link to a  header file of some source code. It basically helps the compiler identify that this code exists  

```cpp 
#include <file_name>
```
the preprocess will literaly paste the code from the included file into the script such that it can be run in our functions. This is very similar to import in python. 

#include uses `<file_name>` and `"file_name"`. 

We use <> when we are importing 
* standard library headers
* external libraries
*compiler-provided libraries 

We use "" when we are importing 
* local project headers



### Macros `#define`
macros are created using 

```cpp
    #define 
```
these allow us to replace the macro with other text 

```cpp
    #define PI 3.14159
```

Then we can call this in our code like 

```cpp
    double area = PI * r * r;
```
easy way to improve readibility of our code

They can also take in functions 


```cpp
    #define SQUARE(x) ((x) * (x))
```

The preporcesser only modifies text, it does not understand the syntax of c++

### `#ifdef`

ifdef allows us to control what code gets included before compilation
```cpp
#define DEBUG

#ifdef DEBUG
    std::cout << "Debug mode\n";
#endif
```


### `ifndef` 
    checks if the macro is defined

```cpp
#ifndef MATH_H
#define MATH_H

int add(int a, int b);

#endif
```
defines the math header if it hasnt already been. Guards like these are important since the preprocesser will paste the code twice. Redefinition may not always break but can cause issues down the line


### `#pragma` 
gives special instructions to the compiler 

```
#pragma once
```

which means only include the file once


## The `main()` Function
## Statements & Semicolons
## Scope
## Namespaces
## Comments

## Compilation Process

Once the source code is written, the compiler translates the C++ code into lower-level machine instructions. At this stage, the program is **not yet runnable**. Instead, each source file is independently compiled into an intermediate file called an object file.


## Object Files

Object files (`.o` files on Linux/macOS) contain compiled machine code generated from individual source files.

For example:

```text
main.cpp  →  main.o
math.cpp  →  math.o
```

Object files are **not complete executables**. They may still contain unresolved references to functions or variables defined in other files.


## Linking

During compilation, the compiler only needs function declarations from header files to understand how functions should be used.

For example, a header may declare:

```cpp
int add(int a, int b);
```

This tells the compiler that the function exists, but not how it is implemented.

The actual implementation exists in another source file:

```cpp
int add(int a, int b) {
    return a + b;
}
```

After all source files are compiled into object files, the **linker** connects them together.

The linker resolves references between object files, such as:

```text
main.o needs add()
math.o provides add()
```

It then combines all object files and libraries into the final executable program.

## Whole process 

The command 
```cpp 
g++ main.cpp -o app
```
is actually running the entire process it is not just a compiler


## Static vs Dynamic Libraries
## Executable Generation
## Command Line Compilation
## Build Systems
## CMake

