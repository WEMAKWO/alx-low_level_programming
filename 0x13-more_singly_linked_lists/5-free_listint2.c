#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - A linked list to be freed
 * @head: A pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}

	*head = NULL;
}
