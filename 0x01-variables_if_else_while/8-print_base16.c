#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char lower = 'a';
	int num = 0;

	while (lower <= 'f')
	{
		while (num < 10)
		{
			putchar((num) + '0');
			num++;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
