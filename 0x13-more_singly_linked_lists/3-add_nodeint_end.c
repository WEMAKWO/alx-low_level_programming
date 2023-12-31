#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - This adds a node at the end of linked list
 * @head: pointer to the first element in the list to be printed
 * @n: The data to enter in the new element
 * Return: The pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b = *head;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (b->next)
		b = b->next;

	b->next = a;

	return (a);
}
