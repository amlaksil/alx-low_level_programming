#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: The character in ASCII code
 *
 * Return: the value of the last digit (Success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
		n = -n;
	_putchar(l + '0');
	_putchar('\n');
	return (l);
}
