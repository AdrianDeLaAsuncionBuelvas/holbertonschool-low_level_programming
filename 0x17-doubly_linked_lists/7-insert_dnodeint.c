#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Head of the Linked List.
 * @idx: is the index of the list where the new node should be added.
 * @n: numbers to add.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new;
	size_t count = 0;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));

	while (node)
	{
		count++;
		node = node->next;
	}
	if (count < idx)
		return (NULL);
	if (count == idx)
		return (add_dnodeint_end(h, n));

	node = *h;
	while (--idx)
		node = node->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = node->next;
	node->next->prev = new;
	new->prev = node;
	node->next = new;

	return (new);
}
