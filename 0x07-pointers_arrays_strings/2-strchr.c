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
 * _strchr - Find a character in a string
 * @s: The string address
 * @c: The chracter to be found
 *
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int a = _strlen(s);

	int b;

	char *t;

	for (b = 0; b < a; b++)
	{
		if(*(s + b) == c)
		{
			t = c;
			break;
		}
		else
		{
			t = null;
		}
	}

	return (t);
}
