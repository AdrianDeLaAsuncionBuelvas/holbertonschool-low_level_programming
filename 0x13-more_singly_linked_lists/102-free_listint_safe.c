#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: header of the structure
 * Return: count
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int count = 0;

	temp = *h;
	if (*h == NULL)
		return (0);

	while (*h != NULL)
	{
		if (temp <= temp->next)
		{
			count++;
			free(temp);
			*h = NULL;
			break;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;

			count++;
		}
	}
	h = NULL;

	return (count);
}
