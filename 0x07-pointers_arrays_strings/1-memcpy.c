#include "main.h"

/**
 * *_memset - function fill memory with constant byte
 * @s: variable as in put
 * @b: destinatin pointer
 * @n: number of length
 * Return: pointer of s
*/

char *_memset(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}
	return (s);
}
