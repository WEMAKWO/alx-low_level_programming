#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *c;

	while (head)
	{
		c = head->next;
		free(head->str);
		free(head);
		head = c;
	}
}
