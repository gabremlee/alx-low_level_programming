#include "main.h"

/**
 *_puts - function to print strings to standard output
 *@str: string to process of type char
 *Return: no return value
 */

void _puts(char *str)
{
	int a = 0;

	for (a = 0 ; a < 1000 ; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
