#include "main.h"

/**
  * _strlen - determines the length of a string
  *
  * @s: char pointer
  * Return: the length of a string
  */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		*(s + i);
		i++;
	}
	return (i);
}
