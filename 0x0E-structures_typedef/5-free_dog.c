#include "dog.h"

/**
 * free_dog - fuction that frees dogs
 * @d: calls of the struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
	}
}
