#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: NULL on failure otherwise the new s1
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}
	ptr = malloc(sizeof(*ptr) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
	{
		ptr[l] = s1[l];
	}

	for (k = 0; k < j; k++)
	{
		ptr[l + k] = s2[k];
	}
	return (ptr);
}
