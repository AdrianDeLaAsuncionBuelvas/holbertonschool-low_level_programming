#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: address to be added of str
 * @str: string to be added
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;
	int leng = 0;

	node = malloc(sizeof(list_t));/*assigning the value*/
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);/*copies n bytes of str*/

	while (str[leng])/*loop the string*/
		leng++;/*long str increase*/

	temp = NULL;
	node->len = leng;/* lenght of the str*/
	node->next = NULL;

	if (*head != NULL)/*condition if not NULL*/
	{
		temp = *head;/*temp start as equals head*/
		while (temp->next != NULL)/*condition if temp->next not NULL*/
		{
			temp = temp->next;/*go to the next*/
		}
		temp->next = node;/*next is equals to node*/
	}
	else
	{
		*head = node;/*if is it no met, show me this*/
	}

	return (*head);
}
