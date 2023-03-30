#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head:pointer to head
 * @str:element to add
 * Return:new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = (*head);

	while (str[l])
		l++;
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = l;
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
