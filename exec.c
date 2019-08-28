#include "holberton.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
extern char **environ;

int execute(char **parse)
{
	int i = 0;
	pid_t pid;
	int status;
	char *ptr;

	builtin_t list[] = {
		{"help", _help},
		{"exit", my_exit},
		{"env", my_env},
		{NULL, NULL}
	};

	if (parse[0] == NULL)
		return (1);

	while (list[i].s != NULL)
	{
		ptr = list[i].s;
		if (_strcmp(parse[0], ptr) == 0)
		{
			return (list[i].f());
		}
		i++;
	}

	/*_puts("3. Estoy en execute\n");*/
	pid = fork();
	if (pid == 0)
	{
		if (execve(parse[0], parse, NULL) == -1)
		{
			perror("Error");
			exit(1);
    }
	}
	else if (pid > 0)
		wait(&status);
	else
		perror("Error:");

	return (1);
}

int _help()
{
	_puts("Welcome to the simple shell help\n");
	_puts("Type something and hit enter\n");
	_puts("You can use exit to close interactive mode\n");
	return (1);
}

int my_exit()
{
	_puts("Have a nice day!\n");
	return (0);
}

int my_env()
{
	char *env = *environ;
	int i = 0;

	while (env != NULL)
	{
		_puts(env);
		_puts("\n");
		env = environ[i];
		i++;
	}
	return (1);
}
