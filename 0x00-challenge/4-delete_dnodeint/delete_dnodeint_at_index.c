#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a doubly linked list
 *
 * @head: Pointer to the pointer to the first element of the list
 * @index: Index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *saved_head;
    dlistint_t *tmp;
    unsigned int position;

    /* Check if the list is empty */
    if (*head == NULL)
    {
        return (-1);
    }

    saved_head = *head;
    position = 0;

    /* Traverse the list to the specified index */
    while (position < index && *head != NULL)
    {
        *head = (*head)->next;
        position++;
    }

    /* If the index is out of bounds */
    if (position != index)
    {
        *head = saved_head;
        return (-1);
    }

    /* Delete the node at the specified index */
    if (0 == index)
    {
        tmp = (*head)->next;
        free(*head);
        *head = tmp;
        if (tmp != NULL)
        {
            tmp->prev = NULL;
        }
    }
    else
    {
        (*head)->prev->next = (*head)->next;
        free(*head);
        if ((*head)->next)
            (*head)->next->prev = (*head)->prev;
        *head = saved_head;
    }

    return (1);
}
