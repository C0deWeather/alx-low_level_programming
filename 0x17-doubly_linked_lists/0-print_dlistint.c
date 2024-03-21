#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint list
 * @h: Pointer to the head of the list
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current !=  NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
