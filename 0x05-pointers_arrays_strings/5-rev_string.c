#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer
  */

void rev_string(char *s)
{
	int i = 0;
	int j;

	if (*s == '\0')
		j = 0;
	else
	{
		while (*(s + i) != '\0')
		{
			i++;
			if (*(s + i) == '\0')
				j = i;
		}
	}

	if (j != 0)
	{
		j = j - 1;
		while (*(s + j) == '\0')
		{
			j--;
		}
	}
	_putchar('\n');
}
