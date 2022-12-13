#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz\n";

	_putchar(lower);
}
int _putchar(char lower[])
{
	return (write(1, lower, strlen(lower)));
}
