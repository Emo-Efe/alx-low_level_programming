#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: points to the head node of the linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
