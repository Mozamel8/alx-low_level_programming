#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - function to add node at begin
 * @head:head of node
 * @n:element in the node
 * Return:new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!*head)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	(*head) = temp;

	return (temp);
}
