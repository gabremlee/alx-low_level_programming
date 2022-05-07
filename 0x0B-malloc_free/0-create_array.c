#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function to create array char and initialize specially
 *@size: variable to hold size of array
 *@c: varaible to initialize array created
 *Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; a < size ; a++)
	{
		arr[a] = c;
	}

	return (arr);
}
