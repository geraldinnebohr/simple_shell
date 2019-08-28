#include "holberton.h"

/**
 * main - entry point of the program
 *
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
		line = read_line();
		argv = splits(line, delim);
		printf("main argv[0] = %s\n", argv[0]);
		command = args_path(argv, tokens);
		printf("args path actual en main ==> %s\n", command);
		if (command == NULL)
			execute(argv);
		free(line);
		free(argv);
		free(command);
	}
	return (0);
}
