#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete
 * @head:head of linkedlist
 * Return:nod's data
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr = (*head);
	int w = ptr->n;

	if (w)
	return (0);

	(*head) = (*head)->next;
	free(ptr);
	return (w);
}
