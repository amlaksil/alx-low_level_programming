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
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(1 + 48);
		return (l);
	}
}
