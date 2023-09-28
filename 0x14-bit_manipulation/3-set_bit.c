#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: the number pointer
 * @index: index of the bit to be seen
 * Return: 1 if it worked, or -1 if it has error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > 63)
		return (-1);
	while (mask > 0)
	{
		*n |= mask;
		mask >>= 1;
	}
	return (1);
}
