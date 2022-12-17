#include "main.h"

/**
  * print_line - Draws a straight line in the terminal
  * @n: The character in ASCII code
  */
void print_line(int n)
{
	int num_lines;

	if (n > 0)
	{
		while (n > 1)
		{
			_putchar('_');
			n++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
