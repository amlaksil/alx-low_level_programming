#include "main.h"

/**
 * *_strncpy - Copies n number of string
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of character to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, i = 0;
	int length_s;

	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}
	return (dest);
}
