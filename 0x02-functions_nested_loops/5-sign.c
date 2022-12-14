#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The character in ASCII code
 *
 * Return: 1, 0, and -1 if it is +ve, zero, and -ve respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	        _putchar('-');
		return (-1);
	}
	_putchar('\n');
}
