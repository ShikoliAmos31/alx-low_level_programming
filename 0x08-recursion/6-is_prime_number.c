#include "main.h"

/**
* prime_a - Function that calculates if its a prime number
* @a: The input
* @b: divisor
* Return: 0
*/
int prime_a(int a, int b)
{
if (a == b)
{
return (1);
}
else if (a < 1 || (a != b && a % b == 0))
{
return (0);
}
return (prime_a(a, b + 1));
}

/**
* is_prime_number - Function that detects a prime number
* @n: Input number
* Return: 1 or 0
*/
int is_prime_number(int n)
{
return (prime_a(n, 0));
}
