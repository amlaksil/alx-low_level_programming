#include <stdio.h>
#include <math.h>

/**
 * print_palindrome_num - prints two numbers their product is palindrome
 * @upper_limit: the upper limt of a given digit
 *
 * Return: the largest palindrome made by the product of n-digit number
 */
int print_palindrome_num(int upper_limit)
{
	int lower_limit, max_product = 0;
	int i, j, product, reverse, number;

	lower_limit = 1 + upper_limit / 10;

	for (i = upper_limit; i >= lower_limit; i--)
	{
		for (j = upper_limit; j >= lower_limit; j--)
		{
			product = i * j;
			if (product < max_product)
				break;
			number = product;
			reverse = 0;
			/**
			 * calculating reverse of product to check whether
			 * it is palindrome or not
			 */

			while (number != 0)
			{
				reverse = (reverse * 10) + (number % 10);
				number /= 10;
			}
			if (product == reverse && product > max_product)
			{
				printf("%d, %d\n", i, j);
				max_product = product;
			}
		}
	}
	return (max_product);
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int largest_pal_num;
	int upper_limit;

	upper_limit = (int)pow(10, 3) - 1;
	largest_pal_num =  print_palindrome_num(upper_limit);
	printf("Largest palindrom number = %d\n", largest_pal_num);

	return (0);
}
