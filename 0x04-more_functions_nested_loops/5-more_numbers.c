#include "main.h"

/**
  * more_numbers - Prints 10 times the numbers, from 0 to 14
  *
  */

void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j / 10;
			l = j % 10;
			if (j > 10)
				_putchar((k) + '0');

			_putchar((l) + '0');
		}
		_putchar('\n');
	}
}
