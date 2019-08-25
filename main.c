#include "holberton.h"
/**
 *
 *
 */
int main(void)
{
	char *line;
	char **parse;
	int status;

	do
	{
		line = read_line();
		parse = splits(line);
		status = execute(parse);

		free(line);
		free(parse);
	} while (status);
	return (0);
}
