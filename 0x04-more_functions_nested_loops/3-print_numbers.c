#include "main.h"

/**
* print_numbers - function that prints the numbers (0 through 9)
*
* Return: always 1
*/
void print_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
{
_putchar(c);
}
_putchar('\n');
}
