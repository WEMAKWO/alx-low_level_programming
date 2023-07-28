#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - new node is added at the end of linked list
 * @head: pointer doubled to the lsit_t
 * @str: string to be insected in new node
 * Return: address of new component
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *y;

	if (str == NULL)
		return (NULL);
	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	x->str = strdup(str);
	if (x->str == NULL)
	{
		free(x);
		return (NULL);
	}
	x->len = strlen(x->str);
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	y = *head;
	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
