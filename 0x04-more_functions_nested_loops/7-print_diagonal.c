#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: number to print line
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (i <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
		_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	}
}
