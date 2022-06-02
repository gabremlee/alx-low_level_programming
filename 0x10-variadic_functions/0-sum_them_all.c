#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - a program to calculate variable sum
 *@n: first value of the variable arguement
 *@...: other values
 *Return: total sum on success and 0 for failure
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return 0;
	va_list elem;
	int i, sum = 0;

	va_start(elem, n);

	for(i = n ; i >= 0 ; i = va_arg(elem, int)
		
		sum += i;

	va_end(elem);

	return sum;
}
