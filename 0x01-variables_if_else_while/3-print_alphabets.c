#include <stdio.h>

/**
 * main - entry point to program
 * Return: returns 0 for successful execution
 */

int main(void)
{
	char ch;

	for (ch ='a', ch <='z', ch++)
	{	
		putchar("%c", ch);
	}

	for (ch ='A', ch <='Z', ch++)
	{
		putchar("%c", ch);
	}

	putchar("\n");

	return (0);
}
