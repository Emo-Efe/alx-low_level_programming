#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h:  A pointer to the head node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

