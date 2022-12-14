#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: natural number
 */
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		putchar((n) + '0');
		putchar(',');
		putchar(' ');
	}
	_putchar('\n');
}
