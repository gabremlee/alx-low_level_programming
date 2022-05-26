#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prv;
	listint_t *nxt;

	prv = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prv != NULL; i++)
		{
			prv = prv->next;
		}
	}

	if (prv == NULL || (prv->next == NULL && index != 0))
	{
		return (-1);
	}

	nxt = prv->next;

	if (index != 0)
	{
		prv->next = nxt->next;
		free(nxt);
	}
	else
	{
		free(prv);
		*head = nxt;
	}

	return (1);
}
