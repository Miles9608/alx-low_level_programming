#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary, *index;

	if (head != NULL)
	{
		index = *head;
		while ((temporary = index) != NULL)
		{
			index = index->next;
			free(temporary);
		}
		*head = NULL;
	}
}
