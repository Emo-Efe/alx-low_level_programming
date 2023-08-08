#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file that already exits
 * @filename: filename.
 * @text_content: content to be added.
 *
 * Return: 1 if the file exists. -1 if file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
