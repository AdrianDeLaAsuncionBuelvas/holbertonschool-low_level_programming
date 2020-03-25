#include "lists.h"

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: head of the struct
 * Return: numbers of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *temp;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			count++;
			break;
		}
		else
		{
			temp = temp->next;
			count++;
		}
	}


	return (count);
}
