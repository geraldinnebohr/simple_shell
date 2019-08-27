#include "holberton.h"

/**
 *
 *
 */

int main(int argc, char **argv, char **environ)
{
	char *line = NULL;
	char **parse;
	char *delim = "\t \a\n";

	(void)argc;
	(void)argv;


	while (1)
	{
		line = read_line();
		parse = splits(line, delim);
		args_path(parse, environ);
		execute(parse);
		free(line);
		free(parse);
	}
	return (0);
}
