#include "holberton.h"
/**
 */
int main(void)
{
	char *line;
	char **parse;

	while (line)
	{
		line = read_line();
		parse = splits(line);
		execute(parse);
	}

	free(line);
	free(parse);
	return (0);
}
