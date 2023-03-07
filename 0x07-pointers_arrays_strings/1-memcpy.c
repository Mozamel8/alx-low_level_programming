#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @s: variable as in put
 * @b: destinatin pointer
 * @n: number of length
 * Return: Pointer of string
*/

char *_memcpy(char *si, char *bi, unsigned int ni)
{
	unsigned int i;

	for (i = 0; i < ni; i++)
	{
		si[i] = bi[i];
	}
	return (si);
}
