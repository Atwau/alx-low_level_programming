#include "main.h"

/**
 * int_islower - checks if alphabet is lowecase
 * Return: 1 if lowercase
 * @c: arguments that takes in lower alphabet
 */

int int_islower(int c)
{
	char c = 'a';

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
