#include "main.h"
/**
 * _strchr - function entry point
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\o' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
