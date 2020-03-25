#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Pointer to Pointer of the listint
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt;

	if (*head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;

	return (*head);
}
