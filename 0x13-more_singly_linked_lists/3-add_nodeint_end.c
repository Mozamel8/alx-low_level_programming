#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head:pointer to head
 * @n:element to add
 * Return:new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = (*head);

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = new;

	return (new);

}
