#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: Pointer to the element in the linked list
 * Return: The data inside the elements that was deleted be returned
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (!head || !*head)
		return (0);
	b = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (b);
}
