#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if the node was successfully deleted, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current_node, *previous_node;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current_node = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current_node);
        return (1);
    }

    for (i = 0; i < index && current_node != NULL; i++)
    {
        previous_node = current_node;
        current_node = current_node->next;
    }

    if (current_node == NULL)
        return (-1);

    previous_node->next = current_node->next;
    free(current_node);

    return (1);
}
