#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: a character pointer
 * Return: encoded string
 */

char *rot13(char *n)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (n[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == alpha[j])
			{
				n[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (n);
}
