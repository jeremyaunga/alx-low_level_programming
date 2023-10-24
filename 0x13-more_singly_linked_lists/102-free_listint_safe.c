#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list with safe handling.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **head)
{
    listint_t *current = *head;
    listint_t *temp;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        temp = current;
        current = current->next;
        free(temp);
        if (current >= temp)
            break;
    }

    *head = NULL;

    return count;
}

