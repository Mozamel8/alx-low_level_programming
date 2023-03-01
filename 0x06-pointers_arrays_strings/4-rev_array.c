#include "main.h"

/**
 * reverse_array - function reverse arry
 * @a: arry to reverse
 * @n: number of element in array
 * Return:void
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
