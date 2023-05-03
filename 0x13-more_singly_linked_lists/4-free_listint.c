#include <stdlib.h>
#include "list.h"

/**
 * free_listint - This function frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
