#include <stdio.h>

/**
   * main - Prints the alphabet without q and e.
   *
   * Return: Always 0 (Success)
   */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
