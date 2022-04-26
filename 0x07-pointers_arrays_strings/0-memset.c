#include "main.h"

/**
 *_memset - a function to fill memory
 *@s: pointer to fill up
 *@b: constant byte used to fill up s
 *@n: specify the amount of byte to fill up
 *Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		*(s + a) = b;
	}

	return (s);
}
