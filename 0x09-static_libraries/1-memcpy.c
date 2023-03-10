#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @si: variable as in put
 * @bi: destinatin pointer
 * @ni: number of length
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
