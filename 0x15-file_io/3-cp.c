#include "main.h"
#include <stdio.h>
#define BUF_SIZE 1024

/**
 * error_98 - checks for error 98
 * @buf: The Buffer
 * @_rd0: The value to check
 * @argv: argument vector
 */
void error_98(int file_from, char *buf, char *argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %\n", argv);
		free(buf);
		exit(98);
	}
}

/**
 * error_99 - checks for error 99
 * @buf: The Buffer
 * @_rd0: The value to check
 * @argv: argument vector
 */
void error_99(int file_from, char *buf, char *argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %\n", argv);
		free(buf);
		exit(99);
	}
}

/**
 * error_100 - checks for error 100
 * @buf: The Buffer
 * @_rd0: The value to check
 * @argv: argument vector
 */
void error_100(int file_from, char *buf)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close %\n", file_from);
		free(buf);
		exit(100);
	}
}

/**
 * main - Main function.
 * @argc: number of arguments.
 * @argv: Pointer to an array of arguments
 * @file_from: Filename to copy from.
 * @file_to: File name to copy into.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	int _rd0, _rd1;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);

	file_to = open(argv[1], O_RDONLY);
	error_98(file_to, buf, argv[1]);

	file_from = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file_from, buf, argv[2]);

	do {
		_rd0 = read(file_to, buf, BUF_SIZE);
		if (_rd0 == 0)
			break;
		error_98(_rd0, buf, argv[1]);

		_rd1 = write(file_from, buf, _rd0);
		error_99(_rd1, buf, argv[2]);

	} while (_rd1 >= BUF_SIZE);

	_rd0 = close(file_from);
	error_100(_rd0, buf);
	_rd0 = close(file_to);
	error_100(_rd0, buf);
	free(buf);
	return (0);
}
