#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: The character in the ASCII code
 *
 * Return: Always 0 (Successful)
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs;
		abs = -1*i;
		_putchar(abs);
	}
	else
	{
		_putchar(i);
	}
	return (0);
}
