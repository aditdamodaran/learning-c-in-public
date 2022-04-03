# Chapter 1

Here we're just getting started with a simple "Hello World" program in **hello.c** to get our bearings. To compile, run:

> ``cc hello.c``

This should create an executable file named **a.out** in the same directory, which can be run with:

> ``./a.out``

This should print:

> ``Hello World!``

We can add flags and other compiler options. ``-o`` for example enables us to **output** a memorable name for the file, such as "hello".

> ```cc -o hello hello.c```

Which can be run with:

> ```./hello```


Now let's inspect the program line-by-line. First we import some of the commonly used C libraries (Standard I/O and Standard Library):

```
#include <stdio.h>
#include <stdlib.h>
```

Then we have:

```
int main(void){
  if (printf("%s \n", "Hello World") == EOF){
    return EXIT_FAILURE;
  }
  else {
    return EXIT_SUCCESS;
  }
} 
```

The ``main`` function is the program's entry point. C has two types of execution environments:
  * freestanding (used in embedded programming)
  * hosted (minimal set of library functions)

``main`` returns a value of type ``int``.  ``void`` in the arguments indicates we're not going to accept arguments.


``int`` is a signed integer type, that can be used to represent both positive and negative integers as well as zero. The return values are integers: EXIT_SUCCESS defaults to 0 and EXIT_FAILURE defaults to 1. 

<br>

> The value of EOF is a negative integer to distinguish it from "char" values that are in the range 0 to 255. It is typically -1, but it could be any other negative number ... according to the POSIX specs, so you should not assume it is -1. If the call to ``puts()`` or ``printf()`` fails, it will return EOF indicating a write error. Hence we check that we do not encounter EOF before returning EXIT_SUCCESS.

<br>


[Note](https://stackoverflow.com/questions/2454474/what-is-the-difference-between-printf-and-puts-in-c): ```puts()``` is simpler than ```printf()``` but be aware that the former automatically appends a newline. Eventually we want to print formatted output to print arguments other than strings. This is where ``printf()`` is preferable. Be careful not to pass user-supplied inputs to the first argument in printf, which could result in a security vulnerability.


