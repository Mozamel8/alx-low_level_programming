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

	for (i = 1; i <= square; i++)
	{
	if (n % i == 0)
	{
	largest = n / i;
	}
	}
	printf("%ld\n", largest);
	return (0);

}
