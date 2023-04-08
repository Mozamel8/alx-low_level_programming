#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * print_binary - function
 * @n:number
 * Return:void
*/

void print_binary(unsigned long int n)
{
	unsigned long int hig_bit = 1;

	if (n == 0)
	{
	_putchar('0');
	return;
	}


	while ((hig_bit << 1) <= n)
	{
	hig_bit <<= 1;
	}

	while (hig_bit > 0)
	{
	if (n & hig_bit)
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	hig_bit >>= 1;
	}
}
