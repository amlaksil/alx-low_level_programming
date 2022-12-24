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

	if (*src != '\0')
	{
		while (*(src + i) != '\0')
		{
			i++;
			if (*(src + i) == '\0')
				length_s = i;
		}
		while (j < n)
		{
			*(dest + j) = *(src + j);
			j++;
		}
		while (length_s < n)
		{
			*(dest + length_s) = '\0';
			length_s++;
		}
	}
	return (dest);
}
