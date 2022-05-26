#include "lists.h"

/**
 * pop_listint - Deletes the head of a node of a linked list
 * @head: Pointer to the head node
 *
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int val;

	if (tmp == NULL)
		return (0);

	val = (tmp)->n;
	*head = tmp->next;
	free(tmp);
	return (val);
}
