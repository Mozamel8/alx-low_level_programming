#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that reallocates
 * a memory block using malloc and free
 * @ptr:pointer to previous
 * @old_size:bytes, of the allocated space for ptr
 * @new_size : the new size, in bytes of the new memory block
 * Return:void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n_ptr = malloc(new_size);
		if (n_ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

	}
	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		n_ptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (n_ptr);
}
