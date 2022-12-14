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


	if (n < 0)
		n = -1 * n;
	l = n % 10;
	_putchar('0' + l);
	_putchar('\n');
	return (l);
}
