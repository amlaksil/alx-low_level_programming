#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: natural number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar((n) + '0');
		if (n != 98)
		{
			_putchar((','));
			_putchar((' '));
		}
		n++;
	}
	_putchar('\n');
}
