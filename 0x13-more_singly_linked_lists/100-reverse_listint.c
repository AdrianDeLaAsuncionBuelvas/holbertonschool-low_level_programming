#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: Pointer to Pointer of the listint
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	node = *head;
	*head = node->next;
	temp = (*head)->next;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp != NULL)
	{
		(*head)->next = node;
		node = *head;
		*head = temp;
		temp = (*head)->next;
	}
	(*head)->next = node;

	return (*head);
}
