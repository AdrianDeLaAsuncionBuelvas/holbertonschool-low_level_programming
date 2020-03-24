#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head Pointer to Pointer of structure
 * Return: rest value of head.
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int count = 0;

	if (!*head)
		return (0);

	node = *head;
	
	count = node->n;
	*head = node->next;
	free(node);

	return (count);
}
