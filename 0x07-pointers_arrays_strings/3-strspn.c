#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string pointer
 * @accept: consists the initial segment of s
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, len;

	while (*(accept + i) != '\0')
	{
		i++;
		if (*(accept + i) == '\0')
			len = i;
	}

	return ((len + 1));
}
