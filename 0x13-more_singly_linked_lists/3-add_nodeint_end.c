#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - This adds a  node at the end of the listint_t list.
 * @head:Pointer to a pointer to the first node on the list.
 * @n:Integer to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if  failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
