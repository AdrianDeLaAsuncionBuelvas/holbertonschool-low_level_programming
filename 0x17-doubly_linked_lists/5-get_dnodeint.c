#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: is Head of the List
 * @index: is the index of the node, starting from 0.
 * Return: returns the nth node, if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	if (node == NULL)
		return (NULL);

	while (node != NULL && index)
	{
		--index;
		node = node->next;
	}
	if (node)
		return (node);

	return (NULL);
}
