#include "main.h"

/**
 * create_file - A function to create a file
 * @filename: filename.
 * @text_content: content written to the file.
 *
 * Return: 1 if it successful. -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int my_file;
	int result = 1;
	int _count = 0;

	if (!filename)
		return (-1);
	my_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (my_file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[_count])
			_count++;
		result = write(my_file, text_content, _count);
	}

	if (result == -1)
		close(my_file);
	return (1);
}
