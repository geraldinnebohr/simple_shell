#include "holberton.h"

/**
 *_strcat - concatenate 2 strings
 *@dest: is a character
 *@src: is a character
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{ }

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}

/**
 *
 *
 *
 */

char *args_path(char **parse, char **tokens)
{
	char **new, *total, **cat;
	int i, j, k;
	struct stat status;
	printf("estoy en args_path\n");

	new = find_path(tokens);
	/*printf("%s\n", new[0]);*/
	for (i = 0; new[i]; i++)
	{
		total = malloc(60);
		_strcat(total, new[i]);
		_strcat(total, "/");
		_strcat(total, parse[0]);

		if (stat(total, &status) == 0)
		{
			printf("skfkgng");
			for (k = 0; parse[k] != '\0'; k++)
				;

			cat = malloc(sizeof(char *) * k);
			cat[0] = _strdup(total);

			for (j = 1; parse[j]; j++)
				cat[j] = _strdup(parse[j]);

			printf("%salgooooooooooooooooo\n", cat[0]);
			return("holi");
		}
	}
	return (NULL);
}
