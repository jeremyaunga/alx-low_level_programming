#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position.
 * @head: A pointer to the pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current = *head, *temp;
    unsigned int i;

    if (!current)
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }

    for (i = 0; i < index - 1; i++)
    {
        if (!current->next)
            return (-1);
        current = current->next;
    }

    temp = current->next;
    if (!temp)
        return (-1);

    current->next = temp->next;
    free(temp);

    return (1);
}

