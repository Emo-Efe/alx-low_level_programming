#include "lists.h"
/**
 * add_dnodeint -adds a new node at the beginning of dlistint_t
 * @head: head of list
 * @e: value of element
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *nw;

	dlistint_t *h;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->e = e;
	nw->prv = NULL;

	if (h != NULL)
	{
		while (h->prv != NULL)
			h = h->prv;
	}

	nw->nxt = h;

	if (h != NULL)
		h->prv = nw;
	*head = nw;
	return (nw);
}
