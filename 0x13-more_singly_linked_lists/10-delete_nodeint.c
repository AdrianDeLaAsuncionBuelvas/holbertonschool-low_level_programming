#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t
 * @head: Pointer to Pointer from structure
 * @index: Index of the numbers
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp;
	unsigned int count = 0;




	if (*head)
	{
	node = *head;
		while (count < index)
		{
			count++;
			temp = node;
			if (node->next)
				node = node->next;

			else
				return (-1);
		}
		if (index == 0)
		{
			(*head) = node->next;
		}
		else if (node->next)
			temp->next = node->next;

		else
			temp->next = NULL;

		free(node);
		return (1);
	}
	else
		return (-1);

}
