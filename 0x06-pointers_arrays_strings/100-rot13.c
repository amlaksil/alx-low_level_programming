#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: a character pointer
 * Return: encoded string
 */

char *rot13(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 65 && n[i] <= 77) || (n[i] >= 97 && n[i] <= 109))
		{
			n[i] = n[i] + 13;
		}
		else if ((n[i] >= 78 && n[i] <= 90) || (n[i] >= 110 && n[i] <= 122))
		{
			n[i] = n[i] - 13;
		}
	}
	return (n);
}
