#include "holberton.h"

/**
 *
 *
 *
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
 *
 */

char **splits(char *line)
{
	char *token;
	char **pptoken;
	int buf = 1024, i = 0, j;
	char *delim;

	delim = " ";
	pptoken = malloc(sizeof(char*) * buf);
	token = strtok(line, delim);

	while (token != NULL)
	{
		pptoken[i] = token;
		i++;

		if (i >= buf)
		{
			buf += buf;
			pptoken = _realloc(pptoken, buf, buf * (sizeof(char*)));
		}

		token = strtok(NULL, delim);
	}
	pptoken[i] = NULL;

	for (j = 0;  pptoken[j]; j++)
		printf("%s\n", pptoken[j]);

	return (pptoken);
}
