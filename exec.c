#include "holberton.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int execute(char **parse)
{
	pid_t pid;
	int status;

	_puts("3. Estoy en execute\n");
	pid = fork();
	if (pid == 0)
	{
		if (execve(parse[0], parse, NULL) == -1)
			perror("Error:");
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
/*
char *if_exists(char **environ)
{
	char **command = NULL;

	printf("estoy en if existssssss");
	command[0] = find_path(environ);

	if (command == NULL)
		return (NULL);
	else
	{
		execute(command);
		return (command[0]);
	}
	}*/
