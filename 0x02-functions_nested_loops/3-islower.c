#include "main.h"

/**
  * _islower - Cheks for lowercase character
  *
  * c - is int parameter
  * Return: 1 if c is lower if not 0
  */
int _islower(int c)
{
	return (_putchar((c >= 97 ? 1 : 0)));
}
