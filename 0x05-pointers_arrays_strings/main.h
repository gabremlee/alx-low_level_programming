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
 *Return: no return value
 */

int _strlen(char *s);

#endif
