#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - Reverses linked list
 * @head: pointer to first node in list
 * Return: Pointer to first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = next;
	}

	*head = a;

	return (*head);
}
