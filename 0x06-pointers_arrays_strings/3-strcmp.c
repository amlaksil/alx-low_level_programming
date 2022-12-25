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
	int val;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
			val = 1;
		else if (s1[i] < s2[i])
			val = -1;
		else
			continue;
	}
	for (i = 0; s1[i] == s2[i]; i++)
	{
		val = 0;
		if (s1[i] == '\0')
			break;
	}
	return (val);
}
