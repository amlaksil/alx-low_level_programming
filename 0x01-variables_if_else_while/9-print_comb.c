#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num) + '0');
		putchar(',' );
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
