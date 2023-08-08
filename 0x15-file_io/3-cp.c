#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

/**
 * error_98 - checks for error 98
 * @buf: The Buffer
 * @rd: The value to check
 * @argv: argument vector
 */
void error_98(int file_from, char *buf, char *argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buf);
		exit(98);
	}
}

/**
 * error_99 - checks for error 99
 * @buf: The Buffer
 * @rd: The value to check
 * @argv: argument vector
 */
void error_99(int file_from, char *buf, char *argv)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv);
		free(buf);
		exit(99);
	}
}

/**
 * error_100 - checks for error 100
 * @buf: The Buffer
 * @rd: The value to check
 * @argv: argument vector
 */
void error_100(int file_from, char *buf)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close %i\n", file_from);
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

int main(int argc, char *argv[])
{
	int file_from, file_to;
	int rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);

	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buf, BUF_SIZE);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(file_to, buf, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(file_from, buf, BUF_SIZE);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	close(file_from);
	close(file_to);
	free(buf);
	return (0);
}
