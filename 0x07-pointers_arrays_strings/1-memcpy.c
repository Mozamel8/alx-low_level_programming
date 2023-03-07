#include "main.h"

/**
 * __memcpy - Function that copies memory area
 * @s: variable as in put
 * @b: destinatin pointer
 * @n: number of length
 * Return: Pointer of string
*/

char *__memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}
	return (s);
}
