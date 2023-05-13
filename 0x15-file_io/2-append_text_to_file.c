#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of  file.
 * @filename: pointer to the name of file.
 * @text_content: String to be added to the end of the file
 *
 * Return: If function fails or filename is NULL - -1.
 *         If  file does not exist the user lacks write permissions - -1.
 *         On success- 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (1);
	}

	fputs(text_content, fp);

	fclose(fp);

	return (0);
}
