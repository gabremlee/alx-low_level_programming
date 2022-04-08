#include <stdio.h>

/**
 *main - starts the program to print type size
 *Return: 0
 */

int main(void)
{
	printf("size of a char: %d\n byte(s)",sizeof(char));
	printf("size of a int: %d\n byte(s)",sizeof(int));
	printf("size of a long int: %d\n byte(s)",sizeof(long int));
	printf("size of a long long: %d\n byte(s)",sizeof(long long));
	printf("size of a float: %d\n byte(s)",sizeof(float));
	return (0);
}
