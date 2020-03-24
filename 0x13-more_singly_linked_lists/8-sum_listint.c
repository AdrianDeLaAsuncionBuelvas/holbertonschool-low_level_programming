#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: head of the structure listint_t
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	if (!node)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
