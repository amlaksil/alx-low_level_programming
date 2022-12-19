#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  * @a: a pointer points to the address of the first number
  * @b: a pointer points to the address of the second number
  *
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
