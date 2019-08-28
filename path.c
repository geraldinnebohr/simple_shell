#include "holberton.h"

/**
 *
 *
 *
 */

char **find_path(char **environ)
{
	char *get_path, **tokens, *delim;
	/*int i;

	printf("estoy en path\n");*/
	delim = ":";
	get_path = _getenv(environ, "PATH");
	tokens = splits(get_path, delim);

	/*for (i = 0; tokens[i]; i++)
	  printf("tiene que imprimir tokens%s\n", tokens[i]);*/
	return (tokens);
}
