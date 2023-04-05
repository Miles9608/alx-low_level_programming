#include "lists.h"

/**
 * get_nodeint_at_index - given node location in
 *                        listint_t linked list.
 * @head: a pointer.
 * @index: index.
 *
 * Return: If the node does not exist - NULL.
 *         Else - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
