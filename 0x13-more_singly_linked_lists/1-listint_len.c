#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - This returns num of components in linked lists to be printed
 * @h: It prints linked list of type listint_t to traverse in stdout
 * Return:The number of nodes to be retunred when printed
 */

size_t listint_len(const listint_t *h)
{
	size_t ranger = 0;

	while (h)
	{
		ranger++;
		h = h->next;
	}

	return (ranger);
}
