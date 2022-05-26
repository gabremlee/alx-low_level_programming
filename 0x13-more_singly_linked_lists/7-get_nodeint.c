#include "lists.h"
/**
 * get_nodeint_at_index - Get the nth node of a listint_t list
 * @head: pointer to the head node
 * @index: Index at which the node is required
 *
 * Return: The pointer to that node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int co;

	for (co = 0; co < index && head != NULL; co++)
	{
		head = head->next;
	}

	return (head);
}
