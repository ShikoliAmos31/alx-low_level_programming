#include "function_pointers.h"
/**
 * array_iterator - array that iterates
 * @array: array
 * @size: size of the array
 * @action: function pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}

