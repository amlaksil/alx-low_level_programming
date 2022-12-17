#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  *
  * @n: The character on ASCII code
  */
void print_diagonal(int n)
{
	int numlines = 1;
	int row;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (numlines = 1; numlines <= row - 1; numlines)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
