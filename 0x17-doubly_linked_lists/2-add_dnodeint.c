#include "lists.h"

/**
 * add_dnodeint - new node added at the beginning of a line
 *
 * @head: header
 * @n: node value to be added
 *
 * Return: new pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->prev = NULL;
		if (*head)
			(*head)->prev = new;
		new->next = *head;
		*head = new;
	}

	return (new);
}
