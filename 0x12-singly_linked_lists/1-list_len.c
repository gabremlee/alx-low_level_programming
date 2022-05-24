#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a list
 * @a: Pointer to a node
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *a)
{
	unsigned int count = 0;

	while (a != NULL)
	{
		count++;
	a = a->next;
	}
	return (count);
}
