#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ce;
	listint_t *prv;

	ce = head;
	prv = head;
	while (head && ce && ce->next)
	{
		head = head->next;
		ce = ce->next->next;

		if (head == ce)
		{
			head = prv;
			prv =  ce;
			while (1)
			{
				ce = prv;
				while (ce->next != head && ce->next != prv)
				{
					ce = ce->next;
				}
				if (ce->next == head)
					break;

				head = head->next;
			}
			return (ce->next);
		}
	}

	return (NULL);
}
