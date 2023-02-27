#include "main.h"

/**
 * swap_int - function to swap two number
 * @a: numer one
 * @b: number two
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
