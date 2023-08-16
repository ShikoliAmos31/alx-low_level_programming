#include "main.h"

/**
* _abs - program that find the absolute value of an integer
* @a: parameter for finding an integer
* Return: -a or a
*/

int _abs(int a)
{
if (a < 0)
return (-a);
else if (a >= 0)
{
return (a);
}
return (0);
}
