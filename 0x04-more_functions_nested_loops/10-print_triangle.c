#include "main.h"

/**
  * print_triangle - prints a triangle
  *
  * @size: is the size of triangle
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}

			for (k = size; k >= i; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}


