#include "main.h"

/**
 * _isalpha - Checks wether c is a letter or not
 *
 * @c The character in ASCII code
 *
 * Return: 1 if it is letter 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
