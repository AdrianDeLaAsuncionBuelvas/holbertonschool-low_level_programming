#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			free(temp->key);
			free(temp->value);
			ht->array[i] = temp->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
