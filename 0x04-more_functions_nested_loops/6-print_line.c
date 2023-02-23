#include "main.h"

/**
 * print_line - draw straight line in terminal
 * @n: number of times to print line
 * Return: void
*/

void print_line(int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
