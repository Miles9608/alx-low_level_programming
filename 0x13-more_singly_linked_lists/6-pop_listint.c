#include "lists.h"

/**
 * pop_listint - Deleting.
 * @head: pointer to the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Else - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int miles;

	if (*head == NULL)
		return (0);

	temporary = *head;
	miles = (*head)->n;
	*head = (*head)->next;

	free(temporary);

	return (miles);
}
