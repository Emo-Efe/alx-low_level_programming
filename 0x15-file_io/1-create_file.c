#include "main.h"

/**
 * create_file - A Function that reates a file.
 * @filename: A pointer variable to the name of the file to created.
 * @text_content: points to a string to write to the file.
 *
 * Return: function fails - -1.
 *         o`n success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "w");

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		fwrite(text_content, sizeof(char), len, fp);
	}

	fclose(fp);
	return (0);
}
