#include "main.h"

/**
 * int _isalpha - function that checks for alphabets
 *
 *@c parameters to be checked
 *
 * Return: 1 if it is an alphabet and 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
	(c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
