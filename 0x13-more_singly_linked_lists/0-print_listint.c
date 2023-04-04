#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @miles: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *miles)
{
	size_t num = 0;

	while (miles)
	{
		printf("%d\n", miles->n);
		num++;
		miles = miles->next;
	}
	return (num);
}
