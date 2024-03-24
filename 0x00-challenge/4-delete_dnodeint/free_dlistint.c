#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 *
 * @head: Pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;

    /* Traverse the list and free each node */
    while (head)
    {
        node = head;
        head = head->next;
        free(node);
    }
}
