#include "main.h"

/**
 * int _islower - function that prints lower case
 *main - function
 *
 * Return: 1 if it is on a lwoercase and 0 otherswise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
