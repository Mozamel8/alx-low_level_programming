#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocate memory
 * and set it to zero
 * @nmemb:array element
 * @size:size of array
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, l;
	char *p;

	l = nmemb * size;
	p = malloc(l);
	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
