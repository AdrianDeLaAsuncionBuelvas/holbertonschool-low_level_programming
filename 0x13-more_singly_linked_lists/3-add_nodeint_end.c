#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t
 * @head: where the news elements will be stored the node
 * @n:numbers that adds
 * Return: address of a new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(int));
	if (node == NULL)
		return (NULL);

	temp = NULL;
	node->n = n;
	node->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	else
	{
		*head = node;
	}
	return (*head);
}
