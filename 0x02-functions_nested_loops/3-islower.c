#include "main.h"

/**
  * _islower - Cheks for lowercase character
  *
  * c - is int parameter
  * Return: 1 if c is lower if not 0
  */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
