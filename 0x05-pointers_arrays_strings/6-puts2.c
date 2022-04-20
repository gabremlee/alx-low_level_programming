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
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int idx;
	int len = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */
	if (len % 2 != 0)
		idx = (len / 2) + 1;
	else
		idx = (len / 2);

	while (idx < len)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
