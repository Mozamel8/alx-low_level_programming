#include <math.h>
#include <stdio.h>

/**
* main - print the largest prime factor of the number 612852475143
*
* Return: Always 0 (Success)
*/

int main(void)
{
	long n = 612852475143;
	long largest;
	int i;
	double square = sqrt(n);

	while (n % 2 == 0)
	{
		if (largest >= 2)
		{
			largest = 2;
		}
		n = n / 2;
	}

	for (i = 3; i <= square; i = i + 2)
	{
		while (n % i == 0)
		{
			if (largest >= i)
			{
				largest = i;
			}
			n = n / 2;
		}
	}
	printf("%ld\n", largest);
	return (0);

}
