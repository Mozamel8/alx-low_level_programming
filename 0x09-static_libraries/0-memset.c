#include "main.h"

/**
 *_memset - function full memory
 *@dest: point to destinatin
 *@src: constant bytes
 *@n:bytes
 *Return: pointer of bytes
*/

char *_memset(char *dest, char src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src;
	}
	return (dest);
}
