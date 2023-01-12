#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number
 * @max: max number
 *
 * Return: pointer
 * if min > max, returns NULL
 * if malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
