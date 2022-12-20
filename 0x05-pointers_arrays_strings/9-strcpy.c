#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copies the string pointed to by src, including the terminating
 * null bye(\0), to the buffer pointed to by dest
 *
 * @dest: destination pointer
 * @src: source pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
		if (*(src + i) == '\0')
			len = i;
	}

	for (j = 0; j <= len; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
