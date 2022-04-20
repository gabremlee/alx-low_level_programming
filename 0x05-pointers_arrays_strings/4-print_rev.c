#include "main.h"

/**
 *print_rev - function to print string in reverse
 *@s: pointer of type char
 *Return: no return value
 */

int mystrlen(char *p)
{
    int c=0;
    while(*p!='\0')
    {
        c++;
        *p++;
    }
    return(c);
}

void print_rev(char *s)
{
	int a = mystrlen(*s);

	int b;

	for (b = a ; b >= 0 ; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
