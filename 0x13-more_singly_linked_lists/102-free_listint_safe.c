#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees linked list
 * @h: A pointer to the first node in the linked list
 * Return: Number of components in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t e = 0;
	int f;
	listint_t *p;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			e++;
		}
		else
		{
			free(*h);
			*h = NULL;
			e++;
			break;
		}
	}

	*h = NULL;

	return (e);
}
