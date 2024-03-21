#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a doubly-linked list
 * @head: pointer to head of linked list
 * @n: data for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL) /*empty list*/
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/*Traverse list to tail*/
	while (current->next != NULL)
		current = current->next;

	new->prev = current;
	current->next = new;
	return (new);
}
