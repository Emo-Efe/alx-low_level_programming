#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function to read a text file and prints the letters
 * @filename:my filename.
 * @letters: numbers of letters printed.
 * @buf: buffer
 *
 * Return: numbers of letters to be printed. If fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	ssize_t fd;
	ssize_t rd, wrt;

	/*Opening the file with a system call*/

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*Creating a buffer to store the file*/
	buf = malloc(sizeof(char) * letters);

	/*Reading the file*/
	rd = read(fd, buf, letters);

	/*Writing to a file*/
	wrt = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);
	return (0);
}
