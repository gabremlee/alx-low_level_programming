#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/**
 *reset_to_98 - function to update the value a pointer points to
 *@*n - takes in a pointer n for input
 *Return: no return value
 */

void reset_to_98(int *n);

/**
 *swap_int - function to swap values of two pointers 
 *@a: first parameter
 *@b: second  parameter
 *Return: no return value
 */

void swap_int(int *a, int *b);

/**
 *_strlen - function to get length of given string 
 *@s: string to process
 *Return: length of string as int
 */

int _strlen(char *s);

/**
 *_puts - function that prints integers  
 *@str: string to process of type char
 *Return: no return value
 */

void _puts(char *str);

/**
 *print_rev - function to print string in reverse
 *@s: pointer of type char
 *Return: no return value
 */

void print_rev(char *s);

/**
 *rev_string - function to print string in reverse
 *@s: pointer of type char
 *Return: no return value
 */

void rev_string(char *s);

#endif
