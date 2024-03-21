#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current !=  NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
