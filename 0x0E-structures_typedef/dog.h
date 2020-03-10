#ifndef DJANGO_H
#define DJANGO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);

#endif
