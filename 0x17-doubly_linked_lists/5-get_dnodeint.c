#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of dlistint_t list
 * @head: head of list
 * @index: index
 * Return: returns the node at index, or NULL if the index does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && head->next != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}
