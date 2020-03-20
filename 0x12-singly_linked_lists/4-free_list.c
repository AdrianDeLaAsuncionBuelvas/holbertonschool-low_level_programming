#include "lists.h"

/**
 * free_list - free the list_t
 * @head: storage the data
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
