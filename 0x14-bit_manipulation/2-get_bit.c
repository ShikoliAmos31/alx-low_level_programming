#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index starting from 0 of the bit you want to get
 * @n: number to check the bit
 * Return: value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
