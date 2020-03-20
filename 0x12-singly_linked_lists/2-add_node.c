#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: address to be added of str
 * @str: string to be added
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int leng = 0;

	node = malloc(sizeof(list_t));/*assigning the value*/
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);/*copies n bytes of str*/

	while (str[leng])/*loop the string*/
		leng++;/*increase*/

	node->len = leng;/*add the leng of str*/
	node->next = *head;/*add address of Double Pointer*/
	*head = node;

	return (*head);
}
