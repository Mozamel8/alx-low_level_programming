#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize dog structure
 * @d:dog structur
 * @name:name of dog
 * @age: age of dog
 * @owner:dog owner
 * Return:void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
