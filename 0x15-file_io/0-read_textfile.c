#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- Function that reads text file and prints to STDOUT
 * @filename: The text file to be read
 * @letters: number of letters  read
 * Return: nr- number of bytes read and printed to STDOUT
 *        0 when the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t nr;
	FILE *fp;

	fp = open(filename, O_RDONLY);
	if (fp == NULL)
	{
		return (0);
	}

	buf = (char *) malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	nr = fread(buffer, sizeof(char), letters, fp);
	if (nread == -1)
	{
		free(buf);
		fclose(fp);
		return (0);
	}
	write(STDOUT_FILENO, sizeof(char), buf, nr);

	close(fp);
	free(buf);
	return (nr);
}
