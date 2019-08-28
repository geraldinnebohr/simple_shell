#include "holberton.h"

/**
 *_strlen - function that returns the length of a string
 *Return: Always i
 *@s: is a character
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
