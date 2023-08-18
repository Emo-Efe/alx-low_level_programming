#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth nodeof a dlistint_t
 *
 * @indx: index of the node being searched for
 *
 * @head: pointer to the head of list
 *
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return;

	tmp = head;
	while (tmp)
	{
		if (indx == size)
			return (tmp)
				size++;
		tmp = tmp->nxt
	}
	return (NULL);
}
