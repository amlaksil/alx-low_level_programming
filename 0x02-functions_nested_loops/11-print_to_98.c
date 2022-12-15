#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: natural number
 */
void print_to_98(int n)
{
	int i;
	i = n;

	if (n >= 98)
	{
		while (i >= 98)
		{
			_putchar((i) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}
	else if (n <= 98)
	{
		while (i < 98)
		{
			_putchar((i) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	_putchar('\n');
}
