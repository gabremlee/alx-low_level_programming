#include "main.h"

/**
 *_strlen - function to get length of given string
 *@s: string to process
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

/**
 * puts2 - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int a = 0;
	int len = _strlen(str);

	for (a = 0 ; a < len ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + a));
		}
	}
	_putchar('\n');
}
