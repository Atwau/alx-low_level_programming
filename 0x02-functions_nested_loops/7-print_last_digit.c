#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * Return: returns that last digit
 * @n: integer
 */

int print_last_digit(int n)
{
	int n;

	x = n % 10;

	if (x < 0)
	{
		x = x * (-1);
	}
	_putchar(x + '0');

	return (x);
}
