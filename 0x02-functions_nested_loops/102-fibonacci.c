#include <stdio.h>
/**
  * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;
		sum = 0;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
