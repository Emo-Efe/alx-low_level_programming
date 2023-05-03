#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning of the listint_t
 * @head: points to a pointer to the first node of the list.
 * @n: An integer to be stored in the new created node.
 * Return: Address of the new element, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Creating a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update head to point to the new node */
	*head = new_node;

	return (new_node);

