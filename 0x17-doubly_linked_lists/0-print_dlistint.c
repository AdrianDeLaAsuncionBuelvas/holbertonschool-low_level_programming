#include "lists.h"

/**
 * print_dlistint - print datas and  return elements numbers
 * @h: head that containt datas from node
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	if (node == NULL)
		return (0);
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
