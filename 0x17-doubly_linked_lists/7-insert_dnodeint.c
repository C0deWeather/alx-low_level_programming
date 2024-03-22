#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to store in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to the node at position idx - 1 */
	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	/* If the list is too short, return NULL */
	if (!temp)
		return (NULL);

	/* Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	/* Update the links */
	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}

