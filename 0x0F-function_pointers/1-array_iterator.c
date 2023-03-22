#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - functon iterate in array
 * @array:array to itrate through it
 * @size:array size
 * @action:function to do action for array
 * Return:void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
		action(array[i]);
		i++;
		}
	}
}
