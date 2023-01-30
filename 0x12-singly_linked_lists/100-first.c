#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bdf()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
void __attribute__((destructor)) aftermain()
{
	printf("This is silamlak love of being sotware engineer\n");
}
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
