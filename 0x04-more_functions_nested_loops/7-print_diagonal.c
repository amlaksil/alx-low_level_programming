#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
  *
  * @n: The character on ASCII code
  */
void print_diagonal(int n)
{
	int numlines = 1;

	if (n <= 0)
	{
		_putchar('\');
	}
	else
	{
		while (numlines < n)
		{
			_putchar('\');
			numlines++;
		}
		_putchar('\n');
	}
}
