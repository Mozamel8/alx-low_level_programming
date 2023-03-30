#include  <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - add new node at the beginning
 * @head:list_t struct point to head
 * @str:string to be print
 * Return:new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nod = malloc(sizeof(list_t));
	unsigned int leng = 0;
	
	while (str[leng])
		leng++;
	new_nod->str = strdup(str);
	new_nod->len = leng;
	new_nod->next = (*head);
	*(head) = new_nod;

	if (!new_nod)
		return (NULL);
	else
		return (*head);
}
