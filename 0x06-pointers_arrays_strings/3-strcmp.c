#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len, j = 0;

	while (*(s1 + j) != '\0')
	{
		j++;
		if (*(s1 + j) == '\0')
			len = j;
	}

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			return (1);

		if (s1[i] < s2[i])
			return (-1);
	}
	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (i == len)
			return (0);
	}
}
