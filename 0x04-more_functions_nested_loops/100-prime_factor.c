#include <stdio.h>
#include <math.h>

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

	while (n % 2 == 0)
	{
		if (largest >= 2)
		{
			largest = 2;
			printf("%ld", largest);
		}
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			if (largest >= i)
			{
				printf("%ld", largest);
			}
			n = n / 2;
		}
	}
	return (0);

}
