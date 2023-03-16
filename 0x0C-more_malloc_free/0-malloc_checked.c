#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fuction allocate memory using malloc
 * @b:the size of allocate
 * Return:Always 0 Success
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
