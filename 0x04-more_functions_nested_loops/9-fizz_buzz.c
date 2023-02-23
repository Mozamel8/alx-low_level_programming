#include <stdio.h>

/**
 * main - program to print Fuzz Buzz
 * instead of multiplier 3 or 5
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i;
	char s[] = "Fizz";
	char d[] = "Buzz";
	char f[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s ", s);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", d);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", f);
		}
		else
		{
			printf("%d ", i);
		}
	}
}
