#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file that already exits
 * @filename: filename.
 * @text_content: content to be added.
 *
 * Return: 1 if the file exists. -1 if file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int _wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	_wrt = write(fd, text_content, strlen(text_content));
	if (_wrt == -1 || _wrt != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	
	close(fd);
	return (1);
}
