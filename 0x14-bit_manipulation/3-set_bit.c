#include "main.h"

/**
 * set_bit - function to set bit to 1
 * @n:binary number
 * @index:index of given bit
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
