#include "holberton.h"

/**
 * main - entry point of the program
 * @argc: is an integer
 * @argv: is a character
 * @environ: is a global constant variable
 * Return: 0 on success
 */

int main(int argc, char **argv, char **environ)
{
	char *line = NULL;
	char *delim = "\t \a\n";
	char *command;
	char **tokens;
	(void)argc;
	tokens = find_path(environ);

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		line = read_line();
		argv = splits(line, delim);
		command = args_path(argv, tokens);
		if (command == NULL)
			execute(argv, environ);
		free(argv);
		free(command);
	}
	return (0);
}
