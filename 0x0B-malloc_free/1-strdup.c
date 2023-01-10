#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer which contains a copy of the string given
 * @str: a pointer which contains string
 *
 * Return: NULL if str = NULL or a pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	ptr = (char *) malloc(sizeof(*str));

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
