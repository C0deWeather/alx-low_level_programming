#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *previous = NULL;

	while (head != NULL && head->next != NULL)
	{
		previous = head;
		head = head->next;
		free(previous);
	}
	free(head);
}
