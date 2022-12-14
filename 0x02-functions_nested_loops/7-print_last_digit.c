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
	int lastnum;

	l = n % 10;
	if (n < 0)
	{
		_putchar((-lastnum) + '0');
	}
	else
	{
		_putchar((lastnum) + '0');
	}
	return (lastnum);
}
