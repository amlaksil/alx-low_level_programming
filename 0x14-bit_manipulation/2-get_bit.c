#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer number
 * @index: is the index
 *
 * Return: the value of the bit at index index or -1
 * if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int q = 1, r;
	unsigned int i = 0, k, j = 0;
	char a[64];

	while (q != 0)
	{
		q = n / 2;
		r = n % 2;
		a[i] = r;
		n = q;
		i++;
	}
	for (k = i - 1; k >= j; k--)
	{
		if (index == k)
			return (a[k]);
	}
	return (-1);
}
