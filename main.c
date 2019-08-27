#include "holberton.h"
/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char *line;
	char **parse;
	int status;
	int line_n = 1;

	signal(SIGINT, SIG_IGN);
	do {
		line = read_line();
		parse = splits(line);
		status = execute(parse, line_n);
		line_n++;
		free(line);
		free(parse);
	} while (status);
	return (0);
}
