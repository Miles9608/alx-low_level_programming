#include "lists.h"

/**
 * listint_len - gives number of elements
 * @h: display linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	for (size = 0; h; size++)
		h = h->next;
	return (size);
}
