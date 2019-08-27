#include "holberton.h"

/**
 * read_line - read line standard input
 *
 * Return: string of input
 */

char *read_line(void)
{
	char *line = NULL;
	size_t size = 0;
	int ret = 0;

	_puts("\x1B[32m$ \x1B[0m");
	if (getline(&line, &size, stdin) == -1)
	{
		free(line);
		exit(-1);
	}
	ret = strlen(line);
	line[ret - 1] = '\0';

	return (line);
}
