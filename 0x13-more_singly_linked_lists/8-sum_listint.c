#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - list sum
 * @head:head of linklist
 * Return: int
*/

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int s = 0;

	if (!ptr)
		return (0);
	while (ptr != NULL)
	{
		s += ptr->n;
		ptr = ptr->next;
	}
	return (s);
}
