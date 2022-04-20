#include "main.h"

/**
 *swap_int - function to swap values of two pointers
 *@a: first parameter
 *@b: second  parameter
 *Return: no return value
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
