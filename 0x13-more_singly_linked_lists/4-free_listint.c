#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- function to free linked
 * @head:head of linkedlist
 * Return:free linkedlist
*/

void free_listint(listint_t *head)
{
	listint_t *temp = malloc(sizeof(listint_t));

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
