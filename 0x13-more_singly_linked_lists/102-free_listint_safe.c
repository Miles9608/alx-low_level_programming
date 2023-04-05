#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts number dof loops
 * @head: Pointer
 *
 * Return: If the list is not looped - 0.
 *         Else - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *male, *female;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	male = head->next;
	female = (head->next)->next;

	while (female)
	{
		if (male == female)
		{
			male = head;
			while (male != female)
			{
				nodes++;
				male = male->next;
				female = female->next;
			}

			male = male->next;
			while (male != female)
			{
				nodes++;
				male = male->next;
			}

			return (nodes);
		}

		male = male->next;
		female = (female->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees loops.
 * @h: Pointer
 *
 * Return: Size of freed space.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temporary;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
