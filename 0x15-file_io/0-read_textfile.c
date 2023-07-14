#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file & print to STDOUT.
 * @filename:the text file being read
 * @letters: the number of letters to be read
 * Return: w- writes the actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t r;
	char *buf;

	fd = open(filename, O_RDONLY);

	while (fd = open(filename, O_RDONLY) == NULL)
		return (-1);

	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
