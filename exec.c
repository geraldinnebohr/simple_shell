#include "holberton.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int execute(char **parse)
{
	int i = 0;
	pid_t pid;
	int status;
	char *ptr;

	builtin_t list[] = {
		{"help", _help},
		{"exit", my_exit},
		{NULL, NULL}
	};

	while (list[i].s != NULL && parse[0] != NULL)
	{
		ptr = list[i].s;
		if(_strcmp(parse[0], ptr) == 0)
		{
			list[i].f();
			return (0);
		}
		i++;
	}

	pid = fork();
	if (pid == 0)
	{
		if (execve(parse[0], parse, NULL) == -1)
			perror("Error");
		exit(1);
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
		perror("Error:");

	return (0);
}

void _help()
{
	_puts("Welcome to the simple shell help\n");
	_puts("Type something and hit enter\n");
	_puts("You can use exit to close interactive mode\n");
}

void my_exit()
{
	_puts("Have a nice day!\n");
	exit(1);
}
