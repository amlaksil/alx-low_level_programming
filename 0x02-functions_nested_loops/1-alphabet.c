#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: nothing hence, void
 */
void print_alphabet(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
