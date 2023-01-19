#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;
	va_start(args, n);

	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(args, int), separator);
	va_end(args);
	printf("\n");
}
