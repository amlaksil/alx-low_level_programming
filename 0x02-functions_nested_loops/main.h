#include <unistd.h>
#include <string.h>
/**
  * _putchar - writes the alphabet in lowercase to stdout
  * print_alphabet call the function _putchar
  * Return: On success 1
  */
void print_alphabet(void);
int _putchar(char lower[]);

int _putchar(char lower[])
{
	return (write(1, lower, strlen(lower)));
}
void print_alphabet(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz\n";

	_putchar(lower);
}




