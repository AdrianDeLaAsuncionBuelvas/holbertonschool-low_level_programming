#include "lists.h"

/**
 * print_list - struct linked list
 * @h: is a node that calls the struct
 * Return: count
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}
		h = h->next;
		count++;
	}

	return (count);
}
