#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: natural number
 */
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		putchar(' ');
	}
	_putchar('\n');
}
