#include "main.h"

/**
 * print_binary - prints the binary of a decimal number
 * @n: binary number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((n >> i) == 0)
		i--;
	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
