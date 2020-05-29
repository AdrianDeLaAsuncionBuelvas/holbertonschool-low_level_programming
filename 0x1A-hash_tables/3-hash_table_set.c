#include "hash_tables.h"

/**
 * hash_table_set -function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	node_handler(node, ht);

	return (1);
}


/**
 * node_handler - check if there is a node with the same key
 * @node: is the one that is going to manipulate the node
 *
 * @ht: is the hash table you want to add or update the key/value
 */

void node_handler(hash_node_t *node, hash_table_t *ht)
{
	unsigned long int i = key_index((unsigned char *)node->key, ht->size);
	hash_node_t *temp = ht->array[i];

	if (ht->array[i] != NULL)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (strcmp(temp->key, node->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[i] = node;
	}
}
