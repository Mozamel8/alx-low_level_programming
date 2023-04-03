#include "lists.h"
#include <stddef.h>

/**
 * list_len - print number of elements
 * @h:pointer to linkedlist
 * Return:number of element in linkedlist
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
