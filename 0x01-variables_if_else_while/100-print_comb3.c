#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar((i) + '0');
				putchar((j) + '0');
				if (i != 8)
				{	putchar(',');
				        putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
