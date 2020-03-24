#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	unsigned int count;


	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	temp = NULL;
	node->n = n;
	node->next = NULL;


	if (*head != NULL)
	{

		if (idx == 0)
		{
			node->next = *head;
			*head = node;

			return (node);
		}

		temp = *head;
		while (temp->next != NULL)
		{
			while (count == idx - 1)
			{
				node->next = temp->next;
				temp->next = node;

				return (node);
			}
			count++;
			temp = temp->next;
		}

	}
	else
		return (NULL);

	free(node);
	return (*head);
}
