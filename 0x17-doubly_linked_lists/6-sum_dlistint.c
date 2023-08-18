#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 *
 * @head: head of the list
 *
 * Return: sum of the data in the list
 */

int sum_dlistint(dlistint_t *head);
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prv != NULL)
			head = head->prv;

		while (head != NUL)
		{
			sum += head->n;
			head = head->nxt;
		}
	}

	return (sum);
}
