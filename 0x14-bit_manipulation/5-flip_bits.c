#include "main.h"
/**
 * flip_bits -returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: the second number
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63;
	int count = 0;

	unsigned long int exclusive = n ^ m;
	unsigned long int current;

	while (i >= 0)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;

		i--;
	}
	return (count);
}
