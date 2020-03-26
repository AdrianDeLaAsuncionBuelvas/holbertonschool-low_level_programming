# 0x13. C - More singly linked lists

## Table of Contents
* [Description](#description)
* [Structure](#structure)
* [Propotipes](#prototipes)
* [Examples](#examples)


### Description
Investigate, Understand and Execute Code, according to the given Tasks, in order to improve your Logic and understanding in **Linked List**

### Structure
Use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


### Prototipes
These are the Prototypes of Functions to be used:

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);

### Example
An example to show would be like inverting a list with only 2 variables:

   while ((*head) != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;

#### Author
[Adrian De La Asuncion Buelvas](https://github.com/AdrianDeLaAsuncionBuelvas)
[Linkedin](https://www.linkedin.com/in/adrian-enrique-de-la-asuncion-buelvas-24645718a/) | [Twitter](https://twitter.com/AdrianDeLaAsun1)
email : **delaasuncionbuelvasadrian@gmail.com**