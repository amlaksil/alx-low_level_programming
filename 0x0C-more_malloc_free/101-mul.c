#include "main.h"

/**
 * main - multiplies two positive numbers
 *
 * Return: produt of the two number
 */

int main(int argc; char *argv)
{
	unsigned int mul = 1, num1, num2;
	int i;

	for (i = 1; i < 3; i++)
	{
		mul *= argv[i];
	}
	_putchar(
