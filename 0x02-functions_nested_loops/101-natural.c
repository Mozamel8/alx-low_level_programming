#include <stdio.h>

/**
 * main - sum of multiplication 3 5 until 1024
 *
 * Return: Always 0 (Success)
 */

void main(void)
{
	int count, sum = 0;

	for (count = 3; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 ==0))
		{
			sum = sum + count;
		}
	}
	printf("%d\n", sum);

	return (0);
}
