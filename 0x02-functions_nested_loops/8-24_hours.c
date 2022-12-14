#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return:
 */
void jack_bauer(void)
{
	int i, j;
	int l = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((l) + '0');
			_putchar((i) + '0');
			_putchar(':');
			if (j < 10)
			{
				_putchar((i) + '0');
				_putchar((j) + '0');
			}
			else
			{
				_putchar((j) + '0');
			}
			_putchar('\n');
		}
	}
}
