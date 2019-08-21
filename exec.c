#include "holberton.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */

void execute(char **parse)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		write(1, ":D", 2);
		if (execve(parse[0], parse, NULL) == -1)
		{
			perror("Error:");
		}
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
	{
		perror("Error:");
	}
	/*return (parse);*/
}
