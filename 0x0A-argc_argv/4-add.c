#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments passed
 * @argv: one-demensional array of strings
 *
 * Return: 1 if error occur if not 0
 */

int main(int argc, char *argv[])
{
	int i, j, m, k, sum = 0;
	char num[] = "0123456789";

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc ; i++)
		{
			for (k = 0; k < 3; k++)
			{
				m = 0;
				for (j = 0; j < 10 ; j++)
				{
					if (*argv[i][k] == num[j])
					{
						sum += atoi(argv[i][k]);
						m = 1;
						break;
					}
				}
				if (m == 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
