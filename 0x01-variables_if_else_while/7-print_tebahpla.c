#include <stdio.h>
/**
  * main - Prints reversed alphabet.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
