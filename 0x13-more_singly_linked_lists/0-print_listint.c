#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0; // Initialize a counter to keep track of the number of nodes

    if (h == NULL)
    {
        printf("Linked list is empty.\n");
        return num; // Return 0 since the list is empty
    }

    // Traverse the linked list using a loop
    while (h)
    {
        printf("%d", h->n); // Print the value of the current node's 'n' member

        if (h->next)
            printf(" -> "); // Print arrow to indicate next node
        else
            printf("\n"); // Print newline at the end of the list

        num++; // Increment the counter
        h = h->next; // Move to the next node in the linked list
    }

    return num; // Return the total number of nodes in the linked list
}
