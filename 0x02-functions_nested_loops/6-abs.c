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
		_putchar((i * -1));
	}
	else
	{
		_putchar((i * 1));
	}
	return (0);
}
