#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Prints a string _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char print[] = "_putchar\n";

	write(1, print, strlen(print));
	return (0);
}
