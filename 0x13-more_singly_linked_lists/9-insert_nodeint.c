#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert
 * @head:node begin
 * @idx:place to add
 * @n:data of new node
 * Return:new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = (*head);
	unsigned int ind = 0;
	listint_t *new_n = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);
	
	while (ptr->next != NULL)
	{
		ind++;
		if (ind == idx)
		{
			new_n->next = ptr->next;
			ptr->next = new_n;
			new_n->n = n;
			return (new_n);
		}
		ptr = ptr->next;
	}
	return (new_n);
}
