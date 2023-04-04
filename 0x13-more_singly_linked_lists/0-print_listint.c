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
	listint_t *t = h;

	if (!t)
		return (0);
	while (t != NULL)
	{

		printf("%d\n", t->n);
		t = t->next;
		counter++;
	}

	return (counter);
}
