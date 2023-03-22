#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function to check element
 * @array:arry to search in it
 * @size:size of array
 * @cmp:function to search
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
