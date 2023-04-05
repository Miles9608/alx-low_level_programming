#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to display all elements
 * @h: print linled list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	for (size = 0; h; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
