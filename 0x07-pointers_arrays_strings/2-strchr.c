#include "main.h"
/**
 * _strchr - function entry point
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\o' ; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
