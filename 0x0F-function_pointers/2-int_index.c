#include "function_pointers.h"
/**
 * int_index -function that searches for an integer
 * @size: size of element in array
 * @array: array
 * @cmp: function pointer to compare search
 *  Return: -1 if size <= 0, int element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
