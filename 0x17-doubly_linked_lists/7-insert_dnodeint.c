#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 *
 * @h: pointer
 *
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - assigns a new node at a given index
 *
 * @h: pointer
 * @idx: node index
 * @n: node value
 *
 * Return: the new pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = dlistint_len(*h);
	dlistint_t *new = NULL, *tmp = *h;

	if (h)
	{
		if (idx > len)
			return (NULL);
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == len)
			return (add_dnodeint_end(h, n));

		new = malloc(sizeof(dlistint_t));
		new->n = n;
		if (new)
		{
			while (idx--)
			{
				tmp = tmp->next;
			}
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev->next = new;
			tmp->prev = new;
		}
	}
	return (new);
}
