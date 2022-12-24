#include "main.h"

/**
 * print_number - Prints integer
 * @n: the number to be printed
 *
 */
void print_number(int n)
{
	if (n >= 0)
		_putchar((n) + '0');
	else
	{
		_putchar('-');
		_putchar((-n) + '0');
	}

}
