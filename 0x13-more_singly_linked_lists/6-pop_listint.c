#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete
 * @head:head of linkedlist
 * @n:data of node
 * Return:nod's data
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	
	ptr = (*head);
	(*head) = (*head)->next;
	free(ptr);
	return ((*head)->n);
}
