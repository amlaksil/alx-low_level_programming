#include "main.h"

/**
  * print_line - Draws a straight line in the terminal
  * @n: The character in ASCII code
  */
void print_line(int n)
{
	int numlines = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (numlines <= n)
		{
			_putchar('_');
			numlines++;
		}
		_putchar('\n');
	}
}
