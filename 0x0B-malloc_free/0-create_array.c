#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: initializer
 *
 * Return: NULL if size is zero or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
