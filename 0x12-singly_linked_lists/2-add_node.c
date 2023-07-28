#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - at the beginning of a linked list a new node is added
 * @head: pointer to be doubled to the list_t
 * @str: new string added in the node
 * Return: address of the new component or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *y;

	y = malloc(sizeof(list_t));
	if (y == NULL)
		return (NULL);
	y->str = strdup(str);
	y->len = strlen(str);
	y->next = *head;
	*head = y;
	return (y);
}
