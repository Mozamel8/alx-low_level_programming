#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *_strcpy - copy array of string in another string
 * @dest: variable point to desination
 * @src: variable to source string
 * Return: char of string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}


/**
 * _strlen - Returns the length of string.
 * @s: string to calculate it length
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}

/**
 * new_dog - function to create new dog
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int name_l = 0, owner_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		owner_l = _strlen(owner) + 1;
		new_d = malloc(sizeof(dog_t));

		if (new_d == NULL)
			return (NULL);
		new_d->name = malloc(sizeof(char) * name_l);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->owner = malloc(sizeof(char) * owner_l);

		if (new_d->owner == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->name = _strcpy(new_d->name, name);
		new_d->owner = _strcpy(new_d->owner, owner);
		new_d->age = age;
	}
	return (new_d);
}

