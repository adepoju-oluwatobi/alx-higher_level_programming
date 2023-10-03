#include "lists.h"
/**
 * insert_node - inserting new node
 * at a given position.
 * @head: head of a list.
 * @number: index of the list of the new node
 * added.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *x;
	listint_t *x_prev;

	x = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (h != NULL)
	{
		if (x->n > number)
			break;
		x_prev = x;
		x = x->next;
	}

	new->n = number;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = x;
		if (x == *head)
			*head = new;
		else
			x_prev->next = new;
	}

	return (new);
}
