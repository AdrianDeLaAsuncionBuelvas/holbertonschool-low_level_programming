#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t
 * @h: node elements of a structure.
 * Return: the numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}

	return (count);
}
