#include "lists.h"

/**
 * get_milesint_at_index - given miles location in
 *                        listint_t linked list.
 * @head: a pointer.
 * @index: index.
 *
 * Return: If the miles does not exist - NULL.
 *         Else - the located miles.
 */
listint_t *get_milesint_at_index(listint_t *head, unsigned int index)
{
	unsigned int miles;

	for (miles = 0; miles < index; miles++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
