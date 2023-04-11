C - malloc, free
================




### 0\. Float like a butterfly, sting like a bee

mandatory

Write a function that creates an array of chars, and initializes it with a specific char.

-   Prototype: `char *create_array(unsigned int size, char c);`
-   Returns `NULL` if size = `0`
-   Returns a pointer to the array, or `NULL` if it fails

```
julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */


### 1\. The woman who has no imagination has no wings

Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

### 2. He who is not courageous enough to take risks will accomplish nothing 
function that concatenates two strings.

-   Prototype: `char *str_concat(char *s1, char *s2);`
-   The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
-   if `NULL` is passed, treat it as an empty string
-   The function should return `NULL` on failure


