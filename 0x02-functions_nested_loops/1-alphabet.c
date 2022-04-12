#include "main.h"

/**
 *main - function to print alphabets in low
 *Return: unknown
 */

void print_alphabet(void)
{
	int a = 97;

	for(a = 97 ; a < 127 ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
