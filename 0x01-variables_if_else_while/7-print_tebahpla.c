#include <stdio.h>

/**
 * main - print all number revers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char RevLetter;

	for (RevLetter = 'z'; RevLetter >= 'a'; RevLetter--)
	{
		putchar(RevLetter);
	}

	putchar('\n');

	return (0);
}
