#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: number of strings
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, l, len, k;

	len = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	for (k = 0; s2[k] != '\0';)
	{
		k++;
	}

	if (n >= k)
		len = k;
	p = malloc(i + len + 1);
	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = s1[j];
	}

	for (l = 0; l < len; l++)
	{
		p[j + l] = s2[l];
	}
	p[j + l] = '\0';
	return (p);
}
