#include "lists.h"

/**
 * sum_listint - Total all the data of a listint_t list
 * @head: Pointer to the head node
 *
 * Return: The computed Total
 */

int sum_listint(listint_t *head)
{
	int Total = 0;
	
	while (head != NULL)
	{
		Total += head->n;
		head = head->next;
	}

	return (Total);
}
