#include "main.h"
/**
 * string_toupper - change lower case to upper case
 * @str: string to be onverted
 * Return: strings
 */

char *string_toupper(char *)
{

	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
