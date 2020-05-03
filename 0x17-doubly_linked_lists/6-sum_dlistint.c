#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: Head of the List.
 * Return: returns the sum of all the data (n), if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	size_t sum = 0;

	if (!node)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
