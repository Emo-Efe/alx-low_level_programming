#include "main.h"

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
	int fd,

		char *buf;

	ssize_t _rd, _wrt;

	if (!filename)
	{
		return (0);
	}

	/*Opening the file with a system call*/

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*Creating a buffer to store the file*/
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/*Reading the file*/
	_rd = read(fd, buf, letters);
	if (_rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/*Writing to a file*/
	_wrt = write(STDOUT_FILENO, buf, _rd);
	if (_wrt == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (_rd);
}
