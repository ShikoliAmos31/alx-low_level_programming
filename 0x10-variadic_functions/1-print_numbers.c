#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @n: numbers to be printed
 * @separator: string to be printed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int arr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
				}
				printf("\n");
				va_end(ptr);
				}
