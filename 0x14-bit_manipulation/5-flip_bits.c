#include "main.h"
/**
 * flip_bits -function that returns the number of bits
 * you would need to flip to get from one number to another
 * @m: second number
 * @n: the first number
 * Return: the changed number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int count;

	current = n ^ m;
	for (count = 0; current > 0;)
	{
		if ((current & 1) == 1)
		count++;
		current = current >> 1;
	}
	return (count);
}
