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
 *rev_string - function to print string in reverse
 *@s: pointer of type char
 *Return: no return value
 */

void rev_string(char *s)
{
	int a = _strlen(s);

	int b, d = 0;

	char c[a] = *s;

	for (b = a - 1 ; b >= 0 ; b--)
	{
	 	*(s + d) = c[b];
		d++
	}
	_putchar('\n');
}
