#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name_as_is(char *name);

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name_uppercase(char *name);

/**
 *print_name - function to print name with pointer function as arg
 *@name: name to be printed on screen
 *@f: pointer function to be used to print
 */

void print_name(char *name, void (*f)(char *))
{
	if(!(name == NULL) && !(f == NULL))
		f(name);
}
