#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index in Linked List.
 * @head: Head of the Linked List.
 * @index: Index of the Linked List.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	size_t count = 0;

	if (!*head)
		return (-1);
	while (node)
	{
		count++;
		node = node->next;
	}
	if (count < index + 1)
		return (-1);
	node = *head;
	if (index == 0)
	{
		(*head) = node->next;
		if (node->next)
			node->next->prev = NULL;

		node->next = NULL;
		free(node);
		return (1);
	}
	while (--index)
		node = node->next;
	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;


	free(node);
	return (1);
}
