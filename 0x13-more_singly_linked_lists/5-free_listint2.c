#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: head Pointer to Pointer of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head != NULL)
	{
		node = *head;
	while (node != NULL)
	{
		free(node);
		node = node->next;
	}

	*head = NULL;
	}
}
