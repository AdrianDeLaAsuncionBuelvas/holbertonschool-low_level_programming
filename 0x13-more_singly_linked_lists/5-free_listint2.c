#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: head Pointer to Pointer of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *temp;

	if (node == NULL)
		return;

	while (node->next != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	free(node);
	node = NULL;
}
