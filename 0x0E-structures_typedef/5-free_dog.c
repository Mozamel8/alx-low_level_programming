#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - functon to free structur
 *
 * @d:structure to be free
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
