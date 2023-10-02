#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list
 *
 * Return: 0 if there is no cycle
 */

/**
 * struct listint_s - A singly linked list
 * @num: an integer
 * @next: point to the next node
 * Description: list node structure
 */
typedef struct listint_t
{
	int num;
	struct listint_t *next;
}listint_t;


int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}

	return (0);
}
