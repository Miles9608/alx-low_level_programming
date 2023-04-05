#include "lists.h"

/**
 * sum_listint -  Sum of all the
 *               data.
 * @head: Pointer.
 *
 * Return: If the list is empty - 0.
 *         Else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
