#include "lists.h"

/***
 *add_dnodeint_end - adds a new node at the end of a dlistint_t
 *
 *@e: value of list
 *
 * @head: head of the list
 *
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *nw;
	dlistint_t *h;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->e = e;
	nw->nxt = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->nnxt != NULL)
			h = h->nxt;
		h->nxt = nw;
	}
	else
	{
		*head = nw;
	}
	nw->prv = h;
	return (nw);
}
