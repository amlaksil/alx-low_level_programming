#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: contains the number of arguments passed to the program
 * @argv: one-dimensional array of strings
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", --argc);

	return (0);
}
