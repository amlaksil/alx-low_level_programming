#include <stdio.h>
/**
  * main - prints lowerase alphabet followed by new line
  *
  * Return: Always 0 (Success)
  */
int main(void)
{	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
