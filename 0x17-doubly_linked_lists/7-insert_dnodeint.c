#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a position
 *
 * @h: head of list
 * @idx: index of the new node
 * @n: value of new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw;

	dlistint_t *head;

	unsigned int i;

	nw = NULL;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prv != NULL)
				head = head->prv;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->nxt == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->nxt = head->nxt;
						nw->prv = head;
						head->nxt->prv = nw;
						head->nxt = nw;
					}
				}

				break;
			}
			head = head->nxt;
			i++;
		}
	}

	return (nw);
}
