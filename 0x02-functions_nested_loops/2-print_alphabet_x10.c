#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}
	_putchar('\n');
	i++;
	}
}
