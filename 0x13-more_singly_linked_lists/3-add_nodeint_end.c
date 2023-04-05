#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - increament a node
 * @head: point out the first node
 * @n: add to nde
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *index;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	index = *head;
	while (index->next != NULL)
		index = index->next;
	index->next = newNode;
	return (*head);
}
