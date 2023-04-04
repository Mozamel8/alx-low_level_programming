#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function to free linked
 * @head:head of linkedlist
 * Return:free linkedlist
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	head = NULL;
}
