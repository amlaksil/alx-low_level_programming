#include "main.h"

/**
  * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
  *
  * Return: none hence, void
  */
void print_alphabet_x10(void)
{
	char lower = 'a';
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
