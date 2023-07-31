#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints the elements of all linked list
 * @h: print the linked list of a type listint_t
 * Return:The number of nodes to be returned
 */

size_t print_listint(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("%d\n", h->n);
		y++;
		h = h->next;
	}

	return (y);
}
