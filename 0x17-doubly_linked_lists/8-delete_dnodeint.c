#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1;
	dlistint_t *tmp2;
	unsigned int i;

	tmp1 = *head;

	if (tmp1 != NULL)
		while (tmp1->prev != NULL)
			tmp1 = tmp1->prev;

	i = 0;

	while (tmp1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tmp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp2->next = tmp1->next;

				if (tmp1->next != NULL)
					tmp1->next->prev = tmp2;
			}

			free(tmp1);
			return (1);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		i++;
	}

	return (-1);
}
