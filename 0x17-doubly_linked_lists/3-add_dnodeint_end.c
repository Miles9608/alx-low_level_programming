#include "lists.h"

/**
 * add_dnodeint_end - new node is added at the end of the line
 *
 * @head: header
 * @n: node value to be added
 *
 * Return: newely created pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *cur = *head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;

		if (!(*head))
			*head = new;
		else
		{
			while (cur->next)
				cur = cur->next;
			cur->next = new;
			new->prev = cur;
		}
	}
	return (new);
}
