#include "holberton.h"

/**
 * execute - execution of command
 *
 * @parse: tokenize string
 * @line_n: counter of executions
 *
 * Return: return 0 or 1 status for loop
 */
int execute(char **parse, int line_n)
{
	int i = 0;
	pid_t pid;
	int status;
	char *ptr;

	builtin_t list[] = {
		{"help", _help},
		{"exit", my_exit},
		{"env", my_env},
		{"cd", _cd},
		{NULL, NULL}
	};

	if (parse[0] == NULL)
		return (1);

	while (list[i].s != NULL)
	{
		ptr = list[i].s;
		if (_strcmp(parse[0], ptr) == 0)
			return (list[i].f());
		i++;
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(parse[0], parse, NULL) == -1)
		{
			_puts("./hsh: ");
			number_line(line_n);
			perror(parse[0]);
		}
		exit(1);
	}
	else if (pid > 0)
		wait(&status);
	else
		perror("./hsh: ");

	return (1);
}
