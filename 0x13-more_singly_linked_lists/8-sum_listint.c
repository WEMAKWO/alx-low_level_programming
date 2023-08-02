#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - This calculates the sum of the data in a listint_t list
 * @head: first node in the linked list
 * Return: Returns resulting sum
 */

int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *y = head;

	while (y)
	{
		x += y->n;
		y = y->next;
	}

	return (x);
}
