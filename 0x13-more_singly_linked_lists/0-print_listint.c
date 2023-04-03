#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint- function to print linkedlist
 * @h:head of linkedlist
 * Return:linked list
*/

size_t print_listint(const listint_t *h)
{

	size_t counter = 0;
	
	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
