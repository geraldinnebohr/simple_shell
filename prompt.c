#include "holberton.h"

/**
 *
 *
 */

char *read_line(void)
{
	char *line = NULL;
	size_t size = 1024;
	int ret = 0;

	printf("$ ");
	getline(&line, &size, stdin);
	ret = strlen(line);
	line[ret - 1] = '\0';
	printf("%s", line);
	return (line);
}
