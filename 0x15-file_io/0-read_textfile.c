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
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wr);
}
