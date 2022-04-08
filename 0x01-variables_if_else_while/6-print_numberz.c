#include <stdio.h>

/**
 *main - program start to print 0123456789 using putchar
 *Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
