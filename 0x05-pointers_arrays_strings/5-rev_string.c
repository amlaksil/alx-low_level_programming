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
	if (*s != "")
	{
		while (*(s + i) != '\0')
		{
			i++;
			if (*(s + i) == '\0')
				j = i - 1;
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
		_putchar('\n');
	}
}
