#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_alhabet - prints the alphabet in lowercase
 *
 * Return: nothing (Success)
 */
void print_alphabet(void);
int _putchar(char lower[]);

void print_alphabet(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz\n";

	_putchar(lower);
}
int _putchar(char lower[])
{
	return (write(1, lower, strlen(lower)));
}

