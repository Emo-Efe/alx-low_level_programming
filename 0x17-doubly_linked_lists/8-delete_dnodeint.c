#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a the list
 *
 * @head: head of the list
 * @idx: index of the new node
 * Return: 1 on success, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i;

	h1 = *head;

	if (h1 != NULL)

		while (h1->prv != NULL)
			h1 = h1->prv;

	i = 0;

	while (h1 != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				*head = h1->nxt;
				if (*head != NULL)
					(*head)->prv = NULL;
		}
			else
			{
				h2->nxt = h1->nxt;
				if (h1->nxt != NULL)
					h1->nxt->prv = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->nxt;
		i++;
	}

	return (-1);
}
