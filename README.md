# ETNA Project - my_printf

## Synopsis
This is a simple implementation of printf function that formats and prints data

## Description
The my_printf() function produces output according to a format which is described
below. This function write its output to the stdout, the standard output stream.
Returns the count of printed characters when the function is successful and one empty line when the function fails.

The available convertion specifiers are:
+ %s: Prints a string of characters.
+ %c: Prints a single character.
+ %i: Prints integers.
+ %d: Prints integers.
+ %o: Prints unsigned octals.
+ %u: Prints unsigned integers.
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters.
+ %X: Prints the hexadecial representation of an unsigned decimal in uppercase letters.
+ %%: Prints a simple '%' char.

## Installation
+ You will need `gcc` aptitude to compile the dynamic library and your `main.c`
```bash
sudo apt install gcc
```
+ You will need `make` aptitude to use the Makefiles.
```bash
sudo apt install make
```

## Usage
+ All the files are to be compiled on Debian 8/9/10 or Ubuntu 18
+ Don't forget to `include "my.h"` in codes that use my_printf();

## Example

```bash
make src && ./my_printf
```