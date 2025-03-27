# Chapter 1

## A Tutorial Introduction

In C, the program to print `Hello, world!` is

```c

#include <stdio.h>

main()
{
  printf("Hello, world!\n");
}
```

Assuming the program is in the file named `hello.c`, compiling it is by running:

```bash
cc hello.c
```

This will generate an executable file called `a.out`. Run this program by issuing the command:

```bash
./a.out
```

This will print

```console
Hello, world!

```

