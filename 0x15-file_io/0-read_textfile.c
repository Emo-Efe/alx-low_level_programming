#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- Function that reads text file and prints to STDOUT
 * @filename: The text file to be read
 * @letters: number of letters  read
 * Return: w- number of bytes read and printed to STDOUT
 *        0 when the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
