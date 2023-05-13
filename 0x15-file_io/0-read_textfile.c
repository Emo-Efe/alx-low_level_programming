#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- Function that reads text file and prints to STDOUT
 * @filename: The text file to be read
 * @letters: number of letters  read
 * Return: wc- number of bytes read and printed to STDOUT
 *        0 when the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp, rc, wc;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rc = read(fd, buf, letters);
	wc = write(STDOUT_FILENO, buf, rc);

	free(buf);
	close(fp);
	return (wc);
}
