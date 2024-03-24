#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list of integers
 *
 * @h: Pointer to the first element of the list
 *
 * Description: Prints the integer value of each node in a doubly linked list,
 * starting from the given node (`h`).
 *
 * Return: The number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t num_elements = 0;

    /* Traverse the list and print each node's integer value */
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        num_elements++;
    }

    return num_elements;
}
