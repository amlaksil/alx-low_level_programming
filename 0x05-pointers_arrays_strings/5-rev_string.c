#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int k;
	char *start, *end, temp;

	if (*s != '\0')
	{
		while (*(s + i) != '\0')
		{
			i++;
			if (*(s + i) == '\0')
				j = i;
		}
		start = s;
		end = s + j - 1;
		for (k = 0; k < j / 2; k++)
		{
			temp = *end;
			*end = *start;
			*start = temp;
			start++;
			end--;
		}
	}
}
