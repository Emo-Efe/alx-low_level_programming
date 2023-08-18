#include "lists.h"

/***
 * free_dlistint - Frees the list of dlistint_t
 *
 * @head: points to the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head);
{
	if (head == NULL)
		return;

	while (head->nxt)
	{
		head = head->nxt;
		free(head->prv);
	}
	free(head);
}
