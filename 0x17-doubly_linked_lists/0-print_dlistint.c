#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: head of a list
 * Return: the number of node in the dlistint
 */

size_t print_dlistint(const dlistint_t *h);
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prv != NULL)
		h = h->prv;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->nxt;
	}

	return (count);
}
