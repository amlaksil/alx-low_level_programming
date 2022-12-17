#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  *
  * @n: The character on ASCII code
  */
void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('$');
			_putchar('\n');
	}

	}
}
