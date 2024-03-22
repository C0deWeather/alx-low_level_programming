#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * index of a dlistint_t linked list
 * @head: Pointer to pointer to the head of the list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL) /* If list is empty */
		return (-1);

	if (index == 0)
	{ /* If index is 0, delete the head */
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node at position index */
	for (unsigned int i = 0; current && i < index; i++)
		current = current->next;

	if (current == NULL)/* If index is out of bounds */
		return (-1);

	/* Adjust pointers to skip over the current node */
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

