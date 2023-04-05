#include "lists.h"

/**
 * find_listint_loop - Find first loop
 * @head: A pointer
 *
 * Return: If there is no loop - NULL.
 *         Else - start over.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *male, *female;

	if (head == NULL || head->next == NULL)
		return (NULL);

	male = head->next;
	female = (head->next)->next;

	while (female)
	{
		if (male == female)
		{
			male = head;

			while (male != female)
			{
				male = male->next;
				female = female->next;
			}

			return (male);
		}

		male = male->next;
		female = (female->next)->next;
	}

	return (NULL);
}
