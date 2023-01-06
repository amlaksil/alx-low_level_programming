#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: number of argument
 * @argv: character array
 *
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc == 1 || argc == 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}

	return (0);
}
