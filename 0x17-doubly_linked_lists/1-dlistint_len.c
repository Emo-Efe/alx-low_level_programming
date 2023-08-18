#include

/**
 * dlist_len - Will return the number in a doubly linked list
 * @h: head of the list
 * Return: The number of node in the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h);
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prv != NULL)
		h = h->prv;

	while (h != NULL)
	{
		count++;
		h = h->nxt;
	}

	return (count);
}
