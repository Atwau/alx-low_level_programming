#include "main.h"

/**
 * int_isalpha - checks is input is alphabet
 * Return: 1 if it is alphabet, both lower and uppercase
 * @c: arguments takes in lower and uppercase letters
 */

int int_isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
