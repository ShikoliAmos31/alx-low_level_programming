#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number to be changed
 * @index: the  index, starting from 0
 * Return: 1 if it worked, or -1 if it has error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
