#include "lists.h"

/**
 * insert_nodeint_at_index - Insertion of a new node in a
 *                           list at a given position.
 * @head: Points
 *        head of the listint_t list.
 * @idx: index
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Else - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *c = *head;
	unsigned int node;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;

	if (idx == 0)
	{
		current->next = c;
		*head = current;
		return (current);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);

		c = c->next;
	}

	current->next = c->next;
	c->next = current;

	return (current);
}
