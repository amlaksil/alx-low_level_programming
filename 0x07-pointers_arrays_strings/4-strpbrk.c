#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string to be matched
 * @accept: accepted string matched with s
 *
 * Return: a pointer to the byte in s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, len = 0, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
