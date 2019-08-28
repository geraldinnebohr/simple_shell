#include "holberton.h"

extern char **environ;

/**
 * _help - print the help message for the user
 *
 * Return: status condition to continue the loop
 */
int _help(void)
{
	_puts("Welcome to the simple shell help\n");
	_puts("Type something and hit enter\n");
	_puts("You can use exit to close interactive mode\n");
	return (1);
}
/**
 * my_exit - exti the program
 *
 * Return: status condition to get out the loop
 */
int my_exit(void)
{
	return (0);
}
/**
 * my_env - print the environmet variables
 *
 * Return: status condition continue loop
 */
int my_env(void)
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
/**
 * _cd - change directory to home
 *
 * Return: status to continue
 */
int _cd(void)
{
	char *home;

	home = getenv("HOME");
	chdir(home);
	if (chdir(home) != -1)
	{
		return (1);
	}
	else
	{
		perror("./hsh: ");
		return (1);
	}
}
