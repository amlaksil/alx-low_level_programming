#include <stdio.h>

/**
  * main - Prints the alphabet.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (upper <= 'Z')
	{
		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
