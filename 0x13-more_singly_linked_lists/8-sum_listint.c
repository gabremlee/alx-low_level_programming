#include "lists.h"

/**
 * sum_listint - total all the data of a listint_t list
 * @head: Pointer to the head node
 *
 * Return: The computed total
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
