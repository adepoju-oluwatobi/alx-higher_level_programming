#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

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
} listint_t;

int check_cycle(listint_t *list);

#endif
