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
		if (*(str + a) >= 0 && *(str + a))
		{
			_putchar(*(str + a));
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
