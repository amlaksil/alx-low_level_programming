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
	int i = 0, j;
	int length_s;

	if (*src != '\0')
	{
		while (*(src + i) != '\0')
		{
			i++;
			if (*(src + i) == '\0')
				length_s = i;
		}
		if (n > length_s)
			n = length_s;
		for (j = 0; j < n; j++)
		{
			*(dest + j) = *(src + j);
		}
	}
	return (dest);
}
