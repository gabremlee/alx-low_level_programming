#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print the nodes of a singly linked list
 * @h: Pointer to a node
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *a)
{
	unsigned int count = 0;

	while (a != NULL)
	{
		if (a->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", a->len, a->str);
		}
		count++;
	a = a->next;
	}
	return (count);
}
