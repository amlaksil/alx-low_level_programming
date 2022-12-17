#include <stdio.h>
/**
  * print_triangle - prints a triangle
  *
  * size: is the size of triangle
  */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
