#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: is the Key.
 * @size: is the size of the array of the hash table.
 *
 * Return: the index at which the key/value pair\
 should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;
	unsigned long int new_key = 0;

	new_key = hash_djb2(key);
	index = (new_key % size);

	return (index);
}
