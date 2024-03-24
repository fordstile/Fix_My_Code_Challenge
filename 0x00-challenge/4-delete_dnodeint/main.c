#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point of the program
 *
 * Description: Test program for doubly linked list functions
 * Add nodes to the end of the list, print the list, delete nodes at specific indices,
 * and print the list after each deletion. Finally, free the entire list.
 *
 * Return: Always EXIT_SUCCESS (0).
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;

    /* Add nodes to the end of the list */
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    /* Print the list */
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete a node at a specific index and print the list */
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete the first node and print the list */
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete the first node again and print the list */
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete the first node repeatedly and print the list */
    /* Additional tests for deleting multiple nodes */
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    /* Repeated deletions for remaining nodes */
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");

    /* Print the final state of the list and free memory */
    print_dlistint(head);
    free_dlistint(head);

    return (EXIT_SUCCESS);
}

