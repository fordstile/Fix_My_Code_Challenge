#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a doubly linked list
 *
 * @head: Pointer to the pointer to the first element of the list
 * @n: The integer to store in the new node
 *
 * Return: A pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *last_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        return (new_node);
    }

    /* Traverse the list to find the last node */
    last_node = *head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    /* Append the new node to the end of the list */
    last_node->next = new_node;
    new_node->prev = last_node;

    return (new_node);
}

