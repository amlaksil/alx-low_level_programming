#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @src: source pointer
 * @dest: destination pointer
 *
 * Return: a pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0, k;
	int length_d, length_s;

	if (*src != '\0')
	{
		while (*(dest + i) != '\0')
		{
			i++;
			if (*(dest + i) == '\0')
				length_d = i;
		}

		while (*(src + j) != '\0')
		{
			j++;
			if (*(src + j) == '\0')
				length_s = j;
		}

		for (k = 0; k <= length_s; k++)
		{
			*(dest + length_d) = *(src + k);
			length_d++;
		}
	}
	return (dest);
}
