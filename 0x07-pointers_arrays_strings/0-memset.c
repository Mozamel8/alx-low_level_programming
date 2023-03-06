#include "main.h"

/**
 *_memset - function full memory
 *@s: point to destinatin
 *@b: constant bytes
 *@n:bytes
 *Return: pointer of bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
