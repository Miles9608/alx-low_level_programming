#include "lists.h"

/**
 * get_dnodeint_at_index - ninth node is returned
 *
 * @head: header
 * @index: node index
 *
 * Return: node location
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int miles = 0;

	while (miles != index && head)
	{
		head = head->next;
		miles++;
	}

	if (miles == index && head)
		return (head);
	return (NULL);
}
