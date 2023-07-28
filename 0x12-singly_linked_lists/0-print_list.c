#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - print the components of linked list
* @h: pointer tto the list_t to be printed
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	int c = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		c++;
		h = h->next;
	}
	return (c);
}
