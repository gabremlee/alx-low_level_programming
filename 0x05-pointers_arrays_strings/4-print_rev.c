#include "main.h"

/**
 *print_rev - function to print string in reverse
 *@s: pointer of type char
 *Return: no return value
 */

int _strlen(char *s)
{
	int b = 0, c;

	for (c = 0 ; c < 1000 ; c++)
	{
		if (*(s + 0) >= 0 && *(s + c))
		{
			b++;
		}
		else
		{
			break;
		}
	}
	return (b);
}

void print_rev(char *s)
{
	int a = _strlen(s);

	int b;

	for (b = a ; b >= 0 ; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
