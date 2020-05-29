#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,\
 or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_cp;
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return (NULL);

	key_cp = strdup(key);
	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key_cp) == 0)
			break;
		temp = temp->next;
	}
	free(key_cp);

	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp->value);
}
