#include <stdio.h>
/**
 * main - this program prints alphabet in lower case
 * Return: returns 0 for success
 */


int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar("\n");

	return (0);

}
