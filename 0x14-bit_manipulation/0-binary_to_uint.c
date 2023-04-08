#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function to convert string binary
 * to unsigned int
 * @b:string to be converted
 * Return:Decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int decVal = 1;
	int len = 0, i;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += decVal;
		}
		decVal *= 2;
	}
	return (total);
}
