#include "main.h"

/**
 * _start_to_end - checks the matching of the element
 * @s: start of a string
 * @e: end of a string
 * @str: the given string
 *
 * Return: 1 if matches occure else 0
 */

int _start_to_end(char *str, int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (_start_to_end(str, s + 1, e - 1));
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if the given string is palindrome or not
 * @s: the given string
 *
 * Return: 1 if a string is a palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (_start_to_end(s, 0, n - 1));
}
