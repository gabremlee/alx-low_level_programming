#include "lists.h"

/**
 * listint_len - Returns the no of elements in a
 * linked listint_t list
 * @h: pointer to the head node
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int co = 0;

	while (h != NULL)
	{
		h = h->next;
		co++;
	}

	return (co);
}
