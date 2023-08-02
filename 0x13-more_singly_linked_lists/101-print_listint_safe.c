#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This Counts number of unique nodes
 * @head: Checks a pointer to the head of the listint_t
 * Return: list if is not looped - 0.
 * Otherwise - The number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *dog, *cat;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dog = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (dog == cat)
		{
			dog = head;
			while (dog != cat)
			{
				n++;
				dog = dog->next;
				cat = cat->next;
			}

			dog = dog->next;
			while (dog != cat)
			{
				n++;
				dog = dog->next;
			}

			return (n);
		}

		dog = dog->next;
		cat = (cat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer to head of the listint_t list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
