#include "lists.h"

/**
 * sum_listint - A function that calculates a sum of data in a listint_t list
 * @head: the first node in the linked list
 *
 * Return: result of  Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
