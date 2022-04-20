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
 *_puts - function to print strings to standard output
 *@str: string to process of type char
 *Return: no return value
 */

void _pute(char *str, char pp[])
{
	int a = 0;

	for (a = 0 ; a < 1000 ; a++)
	{
		if (*(str + a) >= 0 && *(str + a))
		{
			pp[a] = (*(str + a));
		}
		else
		{
			break;
		}
	}
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

	char pp[];

	_pute(s, pp);

	for (b = a - 1 ; b >= 0 ; b--)
	{
	 	*(s + d) = pp[b];
		d++;
	}
	_putchar('\n');
}
