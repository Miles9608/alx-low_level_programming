#include "lists.h"

/**
 * insert_nodeint_at_index - to insert new current node.
 * @top: A pointer to the pointer of the list
 * @index: The index of the list
 * @miles: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Esle - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **top, unsigned int index, int miles)
{
	listint_t *new, *copy = *top;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->miles = miles;

	if (index == 0)
	{
		new->next = copy;
		*top = new;
		return (new);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
