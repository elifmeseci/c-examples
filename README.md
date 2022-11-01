# C Programming Language

C is one of the most popular programming language in the world. It is a general-purpose programming language and very powerful. It has been used to develop operating systems, databases, applications, etc.


C is very fast, compared to other programming languages. Also, it is the basis for other programming languages.



**Header files** are included that add functionality to the program. With the inclusion of header files, the functions inside are used. For example, by including the header file library stdio.h, we use basic functions such as printf(), scanf() to print to the screen, and input from the keyboard.

    #include <stdio.h>
    #include <math.h>

**Fuctions** are a block of code that performs a specific task. There are two types of functions, *Standard library* functions and *User-defined* functions. The standard library functions are built-in functions in C programming. These functions are defined in header files. Functions created by user to perform specific tasks are user-defined functions.

    void functionName()
    {
        ... .. ...
        ... .. ...
    }

**Variables** are a container (storage area) to hold data in programming. To indicate the storage area, each variable should be given a unique name (identifier). Variable names are just the symbolic representation of a memory location. 

    int count = 10;

There are some rules for naming a variable:
- A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.

- The first letter of a variable should be either a letter or an underscore, can not be digit or symbol.

- There is no rule on how long a variable name (identifier) can be. However, you may run into problems in some compilers if the variable name is longer than 31 characters.

> Note: Once a variable is declared, the value can be changed, but the type cannot.

