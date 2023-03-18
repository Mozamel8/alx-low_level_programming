#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range array
 * @min:minimum number
 * @max:max number
 * Return:array of integer
*/

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
