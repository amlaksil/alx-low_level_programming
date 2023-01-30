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
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
