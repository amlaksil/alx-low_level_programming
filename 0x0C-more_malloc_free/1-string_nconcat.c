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
	unsigned int i, j, len, k;

	len = n;
	if (s2 == NULL)
		s2 = "";
	if (s2 == NULL)
		s1 = "";
	for (i = 0; s2[i] != '\0';)
	{
		i++;
	}
	for (k = 0; s1[k] != '\0';)
	{
		k++;
	}

	if (n >= i)
		len = i;
	p = malloc(sizeof(char) * (k + len + 1));
	if (p == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
	{
		p[j] = s1[j];
	}

	for (k = 0; k < len; k++)
	{
		p[j + k] = s2[k];
	}
	return (p);
}
