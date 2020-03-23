#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head Pointer to Pointer of structure
 * Return: rest value of head.
 */

int pop_listint(listint_t **head)
{
	listint_t node;
	int rest;

	if (*head == NULL)
		return (0);
	node = *head;
	rest = node->n;
	*head = (*head)->next;
	free(node);

	return (rest);
}
