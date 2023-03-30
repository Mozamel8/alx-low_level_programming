#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free list
 * @head:pointer to struct node
 * Return:void
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
