#include "holberton.h"
/**
 *
 *
 */
int main(void)
{
	char *line;
	char **parse;

	while (1)
	{
		line = read_line();
		parse = splits(line);
		execute(parse);
		free(line);
		free(parse);
	}
	return (0);
}