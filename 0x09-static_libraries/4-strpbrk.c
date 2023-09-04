#include "main.h"

/**
* _strpbrk -function that searches a string for any of a set of bytes
* @s: string to be searched
* @accept: set of bytes to be searched for
* Return: if no set is matched-NULL
* if set is matched - matched bytes to a pointer
*/

char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
