#include "holberton.h"
/**
 * _strcmp - Compares two strings
 *
 * @s1: char
 * @s2: char
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);

	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);

	else
		return (0);
}
