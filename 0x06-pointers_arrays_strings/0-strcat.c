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
 *_strcat - a function to concatenate strings of char arrays 
 *@dest: the string to concatenate to
 *@src: the string to be concatenated
 *Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = _strlen(dest);

	b = _strlen(src);

	for (c = 0; c > b; c++)
	{
		*(dest + a) = *(src + c);
		a++;
	}

	return dest;
}
