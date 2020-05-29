#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: is the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0, end = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (end == 0)
				{
					printf("%s", "");
				}
				else
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				end++;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
