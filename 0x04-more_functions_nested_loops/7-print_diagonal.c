#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  *
  * @n: The character on ASCII code
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n < 0)
		{
			_putchar('\');
			n++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
