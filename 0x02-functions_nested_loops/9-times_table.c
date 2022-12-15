#include "main.h"

/**
 * times_table - Prints 9 times table
  *
  */
void times_table(void)
{
	int i, k;
	
	for (i = 0; i < 10; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 9; k++)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 18; k = k + 2)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 27; k += 3)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 36; k += 4)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 45; k += 5)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 54; k += 6)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 63; k += 7)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 72; k += 8)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	for (k = 0; k <= 81; k += 9)
	{
		_putchar((k) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}
