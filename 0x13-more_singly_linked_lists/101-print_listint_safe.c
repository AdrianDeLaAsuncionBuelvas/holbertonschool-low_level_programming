#include "lists.h"

/**
 *
 *
 *
 *
 *
 */


size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	int count = 0;

	temp = head;
	if (head == NULL)
		exit(98);

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
