#include "dog.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *str;

	str = malloc(sizeof(struct dog_t));
	if (str == NULL)
	{
		return(NULL);
	}

}
