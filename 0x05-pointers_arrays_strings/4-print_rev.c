#include "main.h"

/**
  * print_rev - Prints a string in reverse
  * @s: pointer
  */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
		if (*(s + i) == '\0')
			j = i;
	}

	while ((j - 1) >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
