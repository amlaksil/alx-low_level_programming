#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: a string to be matched
 * @accept: accepted string
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
	}

	return (len);
}
