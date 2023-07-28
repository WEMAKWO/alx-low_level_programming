#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of components in a linked list to be returned
 * @h: pointer to the list_t list
 * Return: number of elements to be retunred in h
 */

size_t list_len(const list_t *h)
{
   int x = 0;

   while (h)
   {
	   x++;
	   h = h->next;
   }
   return (x);
}
