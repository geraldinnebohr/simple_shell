#include "holberton.h"

/**
 * _realloc - reallocates the given area of memory
 *
 * @ptr: array of pointer
 * @old_size: size allocated before
 * @new_size: size to allocate\
 *
 * Return: new allocate space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new;
	unsigned int i;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		new[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new);
}

/**
 * splits - tokenize the input string
 *
 * @line: string from input
 *
 * Return: Array of pointers to every string
 */

char **splits(char *line)
{
	char *token;
	char **pptoken;
	int buf = 1024, i = 0;
	char *delim;

	delim = " ";
	pptoken = malloc(sizeof(char *) * buf);
	token = strtok(line, delim);

	if (!pptoken)
		exit(99);
	while (token != NULL)
	{
		pptoken[i] = token;
		i++;

		if (i >= buf)
		{
			buf += buf;
			pptoken = _realloc(pptoken, buf, buf * (sizeof(char *)));
			if (!pptoken)
				exit(98);
		}

		token = strtok(NULL, delim);
	}
	pptoken[i] = NULL;

	return (pptoken);
}
