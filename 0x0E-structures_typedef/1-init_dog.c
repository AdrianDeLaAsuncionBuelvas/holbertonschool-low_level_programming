#include <stdio.h>
#include "dog.h"

/**
 * init_dog - inicialize a variable of type struct dog
 * @d:reference struct d
 * @name: struct dog name
 * @age: struct dog age
 * @owner: struct dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
