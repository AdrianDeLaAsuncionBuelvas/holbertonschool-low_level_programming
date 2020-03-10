#include "dog.h"


/**
 * _strcpy -copies the string pointed to by src.
 * @dest: char type Character.
 * @src: char type Character
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = ('\0');
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: Pointer dog name
 * @age: dog age
 * @owner: Pointer dog Owner
 * Return: 0 or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str = malloc(sizeof(dog_t));

	if (!str || !name || !owner)
	{
		return (NULL);
	}
	if (name != NULL)
	{
	str->name = malloc(sizeof(name) + 1);
	if (str->name == NULL)
	{
		free(str->name);
		free(str);
		return (NULL);
	}
	}
	_strcpy(str->name, name);
	str->age = age;

	if (owner != NULL)
	{
	str->owner = malloc(sizeof(owner) + 1);
	if (str->owner == NULL)
	{
		free(str->name);
		free(str->owner);
		free(str);
		return (NULL);
	}
	}
	_strcpy(str->owner, owner);


	return (str);

}
