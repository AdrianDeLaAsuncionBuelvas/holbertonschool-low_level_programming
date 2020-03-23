#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t
 * @head: head of structure
 * @index: index of the node, starting at 0
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;
	if (node != NULL)
	{
		while (node)
		{
			if (index == count)
				return (head);

			node = node->next;
			head = node;
			count++;
		}
	}
	else
		return (NULL);

	return (node);
}
