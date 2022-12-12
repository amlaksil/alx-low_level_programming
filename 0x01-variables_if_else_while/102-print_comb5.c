#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i, j, k = 0, l = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar((l) + '0');
			putchar((k) + '0');
			putchar(' ');
			putchar((i) + '0');
			putchar((j) + '0');
			putchar(',');
			putchar(' ');
		}
		if (i == 9)
		{
			k = 1, i = -1;
		}
	}
	putchar('\n');
	return (0);
}
