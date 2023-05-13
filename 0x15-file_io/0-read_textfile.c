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
	int n;
	char *j;
	ssize_t fp, rc, wc;

	if (filename == NULL)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		return (0);
	}
	j = malloc(sizeof(char) * letters);
	if (j == NULL)
	{
		return (0);
	}
	rc = read(n, j, letters);
	wc = write(STDOUT_FILENO, j, rc);

	close(n);
	free(j);
	return (wc);
}
