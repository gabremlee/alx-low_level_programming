#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of of a
 * listint_t list
 * @head: Pointer to the head node
 * @n: data to be saved to the new node
 *
 * Return: Address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (new);
}
