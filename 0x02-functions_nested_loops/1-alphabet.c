#include "main.h"

/**
 * main - print alphapet in lower
 * a function that prints the alphabet, in lowercase, followed by a new line
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
