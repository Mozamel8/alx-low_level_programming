#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - print element
 * @h:string to print
 * Return:number of length
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
