#include <stdio.h>

/**
 * main - print even summation fibonacci number
 * sum < 4,000000
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		j = k - j;

		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
