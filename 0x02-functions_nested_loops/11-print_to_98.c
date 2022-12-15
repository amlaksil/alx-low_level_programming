#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: natural number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar((n) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}
	else
	{
		while (n < 98)
		{
			_putchar((n) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	_putchar(98 + '0');
	_putchar('\n');
}
