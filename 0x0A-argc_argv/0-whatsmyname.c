#include <stdio.h>

/**
 * main - prints the name of excutable file
 * @argc: contains the number of arguments passed to the program
 * @argv: one-dimensional array of strings
 *
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
