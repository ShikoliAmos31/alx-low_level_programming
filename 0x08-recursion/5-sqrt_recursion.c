#include "main.h"

/**
* sqrt_a - Function that returns the natural square root of a number
* @a: The input number
* @b: Iterator
* Return: -1 or square root
*/
int sqrt_a(int a, int b)
{
if (b * b > a)
{
return (-1);
}
else if (b * b == a)
{
return (b);
}
return (sqrt_a(a, b + 1));
}

/**
* _sqrt_recursion - Function that returns the natural square root of a number
* @n: Input number
* Return: The natural square root
*/
int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
