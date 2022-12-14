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

	if (n < 0)
	{
		n = -1 * n;
	}
	lastnum = n % 10;
	_putchar((lastnum) + '0');
	return (lastnum);
}
