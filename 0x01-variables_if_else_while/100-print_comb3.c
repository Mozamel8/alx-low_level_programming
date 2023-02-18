#include <stdio.h>

/**
 * main - print combination of all two digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num2;

	for (num = 48; num < 58; num++)
	{
		for (num2 = num + 1; num2 < 58; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num != 55)
				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
