#include "main.h"

/**
 * set_bit -function that sets the value of a bit to 1 at a given index
 * @index:  the index, starting from 0 of the bit you want to set
 * @n: number to set
 * Return: 1 (success) or -1 (fails)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > sizeof(size_t) * 8)
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
