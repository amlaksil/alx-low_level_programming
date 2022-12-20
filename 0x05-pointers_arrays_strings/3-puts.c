#include "main.h"

/**
  * _puts - Prints a string
  * @str: a character pointer which helps us to iterate
  */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

