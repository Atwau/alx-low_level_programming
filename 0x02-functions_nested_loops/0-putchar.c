#include "main.h"
/**
 * main - function to print _putchar
 * Return: returns 0 for success
 * This function utilizes arrays
 */

int main(void)
{
	char c[] = "_putchar";

	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}

	_putchar(\n);

	return (0);
}
