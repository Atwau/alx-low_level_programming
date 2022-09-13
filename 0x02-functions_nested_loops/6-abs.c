#include "main.h"

/**
 * int_abs - to print absolute numbers, works for negatives
 * @i: takes in numbers
 * Return: returns an integerr
 */

int int_abs(int i)
{
	if (i < 1)
	{
		i = i * -1;
	}

	return (i);
}
