#include "main.h"

/**
 * main - print alphapet in lower
 * print alphabet in lower
 * Returrn: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
