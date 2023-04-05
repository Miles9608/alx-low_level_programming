#include "lists.h"

/**
 * delete_nodeint_at_index - Delete
 * @head: Pointer
 * @index: Indexind
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary, *c = *head;
	unsigned int node;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}

	temporary = c->next;
	c->next = temporary->next;
	free(temporary);
	return (1);
}
