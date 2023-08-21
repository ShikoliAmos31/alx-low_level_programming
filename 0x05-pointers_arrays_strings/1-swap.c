#include "main.h"
/**
* swap_int -program that swaps the value of the two integers
* @a: integers to swap
* @b: integers to swap
*/

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
