#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: pointer
 */

void puts_half(char *str)
{
	int i = 0, length, n;

	if (*(str + i) != ('\0'))
	{
		while (*(str + i) != '\0')
		{
			i++;
			if (*(str + i) == '\0')
				length = i;
		}
		if ((length % 2) != 0)
		{
			n = ((length - 1) / 2);
			while (n < length)
			{
				_putchar(*(str + n));
				n++;
			}
		}
		else
		{
			n = length / 2;
			while (n < length)
			{
				_putchar(*(str + n));
				n++;
			}
		}
	}
	_putchar('\n');
}
