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
	listint_t *new_node;
	listint_t *temp = *head;

	/* Create a new node */
	new_node = mallock(sizeof(list_t));
		if (!new_node)
			return (NULL);

		/* let's initialize the new node */
		new_node->n = n;
		new_node->next = NULL;

		/* If the list is empty,then the new node will be the first node */
		if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Else, find the last node and append the new node */

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
