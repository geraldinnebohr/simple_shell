#include "holberton.h"

/**
 *
 *
 */

char *read_line(void)
{
	char *line = NULL;
	size_t size = 0;
	int ret = 0;

	_puts("$ ");
	if(getline(&line, &size, stdin) == -1)
	{
		free(line);
		exit(-1);
	}
	ret = strlen(line);
	line[ret - 1] = '\0';

	return (line);
}
