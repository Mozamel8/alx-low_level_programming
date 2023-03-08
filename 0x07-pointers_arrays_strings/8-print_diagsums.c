#include <stdio.h>
#include "stdio.h"

/**
 * print_diagsums - function print sum of diagnals
 * @a: array of number
 * @size: size of array
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size) ; i = size + size + 1)
		sum1 = sum1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size -1)
		sum2 = sum2 + a[j];
	printf("%d, %d\n", sum1, sum2);
}
