#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: contains the number of arguments passed to the program
 * @argv: one-demensional array of strings
 *
 * Return: 1 if error occur if not 0
 */

int main(int argc, char *argv[])
{
	int i, j, m, sum = 0;
	char num[] = "0123456789";

	if (argc == 1)
		printf("%c\n", '0');
	else
	{
		for (i = 1; i < argc ; i++)
		{
			m = 0;
			for (j = 0; j < 10 ; j++)
			{
				if (num[j] == *argv[i])
				{
					sum += atoi(argv[i]);
					m = 1;
				}
			}
			if (m == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
