#include "lists.h"

/**
 * dlistint_len - return elements numbers
 * @h: head that containt datas from node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
