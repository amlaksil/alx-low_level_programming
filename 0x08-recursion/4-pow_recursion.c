#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the powe of y
 * @x: base
 * @y: exponent
 *
 * Return: if y is lower than 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
