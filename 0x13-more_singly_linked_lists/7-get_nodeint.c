#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - function return nth node
 * @head:head of node
 * @index:to returned node
 * Return:node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int c = 0;

	if (!temp)
		return (NULL);
	while (temp != NULL)
	{
		if (c == index)
			return (temp);
		c++;
		temp = temp->next;
	}
	return (0);
}
