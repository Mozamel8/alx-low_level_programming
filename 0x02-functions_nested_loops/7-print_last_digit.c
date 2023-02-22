#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @c: Number to process
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
	int lastDig;

	lastDig = c % 10;

	if (lastDig < 0)
	{
		lastDig = lastDig * -1;
	}
	_putchar(lastDig + '0');
	return (lastDig);
}
