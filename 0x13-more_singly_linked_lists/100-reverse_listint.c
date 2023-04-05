#include "lists.h"

/**
 * reverse_listint - Reverses list.
 * @head: A pointer.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *foward, *backwards;

	if (head == NULL || *head == NULL)
		return (NULL);

	backwards = NULL;

	while ((*head)->next != NULL)
	{
		foward = (*head)->next;
		(*head)->next = backwards;
		backwards = *head;
		*head = foward;
	}

	(*head)->next = backwards;

	return (*head);
}
